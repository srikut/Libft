/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srikuto <srikuto@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 19:01:34 by srikuto           #+#    #+#             */
/*   Updated: 2024/11/22 17:54:10 by srikuto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

size_t	word_count(const char *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			count++;
			while (s[i] == c)
				i++;
		}
		else
			i++;
	}
	return (count + 1);
}
char	**assign_chars(char **word_count_t, const char *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (*s != '\0')
	{
		j = 0;
		while (*s != c)
		{
			word_count_t[i][j] = *s;
			j++;
			s++;
		}
		i++;
		s++;
	}
	return (word_count_t);
}
char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**word_count_t;

	word_count_t = (char **)malloc(word_count(s, c) + 1);
	while (*s != '\0')
	{
		i = 0;
		if (*s != c)
		{
			while (*s != c && *s != '\0')
			{
				s++;
				i++;
			}
			if (*s == c)
				word_count_t[j] = (char *)malloc(i);
		}
		s++;
	}
	return (assign_chars(word_count_t, s, c));
}
// int main(void)
// {
// 	char c = ' ';
// 	char *str = "hello, I am a 42 student";

// 	char **result = ft_split(str, c);
// 	return(0);
// }