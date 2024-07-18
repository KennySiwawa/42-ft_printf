/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchikwam <kchikwam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 19:47:00 by kchikwam          #+#    #+#             */
/*   Updated: 2024/06/27 14:32:30 by kchikwam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_numlen(int n)
{
	size_t	length;
	long	num;

	length = 0;
	num = n;
	if (n <= 0)
	{
		length = 1;
		num = -num;
	}
	while (num != 0)
	{
		num = num / 10;
		length++;
	}
	return (length);
}

static void	ft_convert_to_str(char *str, long num, size_t length)
{
	str[length] = '\0';
	if (num == 0)
	{
		str[0] = '0';
		return ;
	}
	while (num)
	{
		str[--length] = '0' + (num % 10);
		num = num / 10;
	}
}

char	*ft_itoa(int n)
{
	size_t	length;
	long	num;
	int		is_neg;
	char	*str;

	length = ft_numlen(n);
	num = n;
	is_neg = 0;
	if (n < 0)
	{
		num = -(long)n;
		is_neg = 1;
	}
	str = (char *)malloc((length + 1) * sizeof(*str));
	if (str == NULL)
		return (NULL);
	if (is_neg)
		str[0] = '-';
	ft_convert_to_str(str + is_neg, num, length - is_neg);
	return (str);
}
