# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kchikwam <kchikwam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/09 15:54:24 by kchikwam          #+#    #+#              #
#    Updated: 2024/07/11 15:59:27 by kchikwam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS        =    ft_isalnum.c ft_isprint.c ft_putchar_fd.c ft_strtrim.c ft_itoa.c\
					ft_strlcat.c ft_strncmp.c ft_substr.c ft_atoi.c ft_isalpha.c \
					ft_memcpy.c ft_putendl_fd.c ft_strchr.c  ft_strlcpy.c \
					ft_strnstr.c ft_tolower.c ft_bzero.c ft_isascii.c ft_memset.c \
					ft_memmove.c ft_putnbr_fd.c ft_strdup.c  ft_strlen.c ft_strrchr.c \
					ft_toupper.c ft_calloc.c ft_isdigit.c ft_memchr.c ft_split.c \
					ft_putstr_fd.c ft_strjoin.c ft_strmapi.c ft_striteri.c ft_memcmp.c 
OBJS        =    $(SRCS:.c=.o)
CC          =    cc
RM          =    rm -f
CFLAGS      =    -Wall -Werror -Wextra
NAME        =    libft.a

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
