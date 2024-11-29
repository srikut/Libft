/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sometani <sometani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 19:01:34 by srikuto           #+#    #+#             */
/*   Updated: 2024/11/27 15:57:53 by sometani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

size_t word_count(char const *s, char c)
{
    size_t count = 0;
    size_t i = 0;

	while(s[i] == " ")
		i++;
    while (s[i] != '\0')
    {
        if (s[i] == c && s[i + 1] != c)
            count++;
        i++;
    }
    return (count + 1);
}

char **malloc_word_len(char **split, char const *s, char c)
{
    size_t i = 0;
    size_t word_len = 0;

    while (*s != '\0')
    {
        if (*s != c)
        {
            word_len = 0;
            while (*s != c && *s != '\0')
            {
                s++;
                word_len++;
            }
            split[i] = (char *)malloc(sizeof(char) * (word_len + 1));
            if (split[i] == NULL) 
                return NULL;
            i++;
        }
        else
            s++;
    }
    split[i] = NULL; 
    return split;
}

char **assign_char(char **split, const char *s, char c)
{
    size_t i = 0;
    size_t k = 0;
    size_t j;

    while (s[k] != '\0')
    {
        if (s[k] != c)
        {
            j = 0;
            while (s[k] != c && s[k] != '\0')
            {
                split[i][j] = s[k];
                k++;
                j++;
            }
            split[i][j] = '\0';
            i++;
        }
        else
            k++;
    }
    return split;
}

char **ft_split(char const *s, char c)
{
    if (s == NULL)
        return NULL;

    size_t num_words = word_count(s, c);
    char **str = (char **)malloc(sizeof(char *) * (num_words + 1));

    if (str == NULL)
        return NULL;

    char **split = malloc_word_len(str, s, c);
    if (split == NULL)
    {
        free(str);
        return NULL;
    }

    return assign_char(split, s, c);
}

int main()
{
    const char *str = "This is a sample string to split";
    char delimiter = ' ';
    char **result = ft_split(str, delimiter);

    if (result != NULL)
    {
        for (int i = 0; result[i] != NULL; i++)
        {
            printf("Word %d: %s\n", i + 1, result[i]);
            free(result[i]);
        }
        free(result);
    }
    else
        printf("Error in memory allocation\n");

    return 0;
}