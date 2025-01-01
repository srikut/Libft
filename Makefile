# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sometani <sometani@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/22 17:31:07 by srikuto           #+#    #+#              #
#    Updated: 2024/12/30 13:33:10 by sometani         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# SRC = ft_isalpha.c\
# 				ft_isdigit.c\
# 				ft_isalnum.c\
# 				ft_isascii.c \
# 				ft_isprint.c\
# 				ft_strlen.c\
# 				ft_memset.c\
# 				ft_bzero.c\
# 				ft_memcpy.c\
# 				ft_memmove.c\
# 				ft_strlcpy.c\
# 				ft_strlcat.c\
# 				ft_toupper.c\
# 				ft_tolower.c\
# 				ft_strchr.c\
# 				ft_strncmp.c\
# 				ft_memchr.c\
# 				ft_memcmp.c\
# 				ft_strnstr.c\
# 				ft_atoi.c\
# 				ft_calloc.c\
# 				ft_strdup.c\
# 				ft_substr.c\
# 				ft_strjoin.c\
# 				ft_strtrim.c\
# 				ft_split.c\
# 				ft_itoa.c\
# 				ft_strmapi.c\
# 				ft_striteri.c\
# 				ft_putchar_fd.c\
# 				ft_putstr_fd.c\
# 				ft_putendl_fd.c\
# 				ft_putnbr_fd.c

# SRCS = $(SRC)
# NAME = libft.a
# CC = cc
# CFLAGS = -Wall -Wextra -Werror
# OBJC = $(SRCS:.c=.o)
# OBJCB = $(SRCSB:.c=.o)
# RM = rm -f
# AR = ar rc

# all: $(NAME)

# $(NAME): $(OBJC)
# 	$(AR) $@ $^

# %.o: %.c libft.h
# 	$(CC) $(CFLAGS) -c $< -o $@

# clean:
# 	$(RM) $(OBJC) $(OBJCB)

# fclean: clean
# 	$(RM) $(NAME)

# re: fclean all
# .PHONY: all clean fclean re

# 変数定義
NAME = libft.a        # 出力するライブラリの名前
CC = gcc              # 使用するコンパイラ
CFLAGS = -Wall -Wextra -Werror # コンパイラオプション
AR = ar -rcs          # アーカイブコマンド
RM = rm -f            # 削除コマンド

SRC = ft_isalpha.c \
      ft_isdigit.c \
      ft_isalnum.c \
      ft_isascii.c \
      ft_isprint.c \
      ft_strlen.c \
      ft_memset.c \
      ft_bzero.c \
      ft_memcpy.c \
      ft_memmove.c \
      ft_strlcpy.c \
      ft_strlcat.c \
      ft_toupper.c \
      ft_tolower.c \
      ft_strchr.c \
	  ft_strrchr.c\
      ft_strncmp.c \
      ft_memchr.c \
      ft_memcmp.c \
      ft_strnstr.c \
      ft_atoi.c \
      ft_calloc.c \
      ft_strdup.c \
      ft_substr.c \
      ft_strjoin.c \
      ft_strtrim.c \
      ft_split.c \
      ft_itoa.c \
      ft_strmapi.c \
      ft_striteri.c \
      ft_putchar_fd.c \
      ft_putstr_fd.c \
      ft_putendl_fd.c \
      ft_putnbr_fd.c

OBJ = $(SRC:.c=.o)    # .c ファイルを .o ファイルに変換

# ルール定義
all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
