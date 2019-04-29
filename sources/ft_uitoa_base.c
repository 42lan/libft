/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 17:39:03 by amalsago          #+#    #+#             */
/*   Updated: 2019/04/29 19:19:40 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_uilen(uintmax_t number, int base)
{
	size_t		length;

	length = 0;
	if (number == 0)
		return (1);
	while (number != 0)
	{
		number /= base;
		++length;
	}
	return (length);
}

char			*ft_uitoa_base(uintmax_t number, int base, int uppercase)
{
	char		*str;
	size_t		length;

	if (base < 2 || base > 36)
		exit(0);
	length = ft_uilen(number, base);
	if (!(str = ft_strnew(length)))
		return (NULL);
	while (length != 0)
	{
		str[--length] = (uppercase == 0)
						? BASE_LOWER[number % base] : BASE_UPPER[number % base];
		number /= base;
	}
	return (str);
}
