/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchikwam <kchikwam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 18:27:46 by kchikwam          #+#    #+#             */
/*   Updated: 2024/06/27 13:11:59 by kchikwam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char	*src)
{
	int		length;
	char	*dup;
	int		i;

	length = 0;
	while (src[length] != '\0')
	{
		length++;
	}
	dup = (char *)malloc((length + 1) * sizeof(char));
	if (dup == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i <= length)
	{
		dup[i] = src[i];
		i++;
	}
	return (dup);
}
