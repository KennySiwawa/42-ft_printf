/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchikwam <kchikwam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 18:11:46 by kchikwam          #+#    #+#             */
/*   Updated: 2024/07/15 21:22:58 by kchikwam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnbr(int n)
{
	int		count;
	char	c;

	count = 0;
	if (n == -2147483648)
	{
		return (ft_printstr("-2147483648"));
	}
	if (n < 0)
	{
		count += ft_printchar('-');
		n = -n;
	}
	if (n >= 10)
	{
		count += ft_printnbr(n / 10);
	}
	c = n % 10 + '0';
	count += ft_printchar(c);
	return (count);
}
