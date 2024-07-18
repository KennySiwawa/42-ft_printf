/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchikwam <kchikwam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 20:56:44 by kchikwam          #+#    #+#             */
/*   Updated: 2024/07/16 14:03:43 by kchikwam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_format(char format, va_list args)
{
	int	count;

	count = 0;
	if (format == '%')
		count += ft_printchar('%');
	else if (format == 'c')
		count += ft_printchar(va_arg(args, int));
	else if (format == 's')
		count += ft_printstr(va_arg(args, char *));
	else if (format == 'd' || format == 'i')
		count += ft_printnbr(va_arg(args, int));
	else if (format == 'p')
		count += ft_printptr(va_arg(args, void *));
	else if (format == 'u')
		count += ft_printnbr_unsigned(va_arg(args, unsigned int));
	else if (format == 'x')
		count += ft_printhex(va_arg(args, unsigned int), 0);
	else if (format == 'X')
		count += ft_printhex(va_arg(args, unsigned int), 1);
	else
		count += ft_printchar(format);
	return (count);
}

static int	parse_format(const char *format, va_list args)
{
	int	count;

	count = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			count += handle_format(*format, args);
		}
		else
		{
			count += ft_printchar(*format);
		}
		format++;
	}
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	va_start(args, format);
	count = parse_format(format, args);
	va_end(args);
	return (count);
}
