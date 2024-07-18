/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchikwam <kchikwam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 18:54:28 by kchikwam          #+#    #+#             */
/*   Updated: 2024/07/16 15:01:57 by kchikwam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <ctype.h>
# include <stdio.h>
# include <string.h>
# include <stddef.h>
# include <limits.h>
# include <stdarg.h>
# include "./libft/libft.h"

int		ft_printf(const char *format, ...);
int		ft_printchar(char c);
int		handle_format(char format, va_list args);
int		ft_printstr(char *str);
int		ft_printnbr(int n);
int		ft_printnbr_unsigned(unsigned int n);
int		ft_printhex(unsigned long n, int uppercase);
int		ft_printptr(void *ptr);

#endif
