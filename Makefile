# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kchikwam <kchikwam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/07 19:14:40 by kchikwam          #+#    #+#              #
#    Updated: 2024/07/16 15:01:01 by kchikwam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	ft_printf.c ft_printchar.c ft_printstr.c ft_printhex.c \
				ft_printnbr.c ft_printnbr_unsigned.c ft_printptr.c
OBJS		=	$(SRCS:.c=.o)
CC			=	cc
RM			=	rm -f
CFLAGS		=	-Wall -Werror -Wextra
NAME		=	libftprintf.a

LIBFT_PATH	=	./libft
LIBFT		=	$(LIBFT_PATH)/libft.a

all:	$(NAME)

$(NAME):		$(OBJS) $(LIBFT)
		ar rc 	$(NAME) $(OBJS)
		ranlib 	$(NAME)

$(LIBFT):
			$(MAKE) -C $(LIBFT_PATH) all

clean:
			$(RM) $(OBJS)
			$(MAKE) -C $(LIBFT_PATH) clean

fclean:		clean
			$(RM) $(NAME)
			$(MAKE) -C $(LIBFT_PATH) fclean

re:			fclean all

.PHONY:		all clean fclean re