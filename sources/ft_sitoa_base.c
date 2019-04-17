/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sitoa_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 00:39:03 by amalsago          #+#    #+#             */
/*   Updated: 2019/04/17 17:26:02 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
# define BASE "0123456789abcdefghijklmnopqrstuvwxyz"

static size_t	ft_silen(intmax_t number, unsigned base)
{
	size_t		length;

	length = 0;
	if (number == 0)
		return (1);
	else if (number < 0)
		length = 1;
	while (number != 0)
	{
		number /= base;
		++length;
	}
	return (length);
}

char			*ft_sitoa_base(intmax_t number, unsigned base)
{
	char		*str;
	size_t		length;

	if (base < 2 || base > 36)
		exit (0);
	length = ft_silen(number, base);
	if (!(str = ft_strnew(length)))
		return (NULL);
	if (number < 0)
	{
		--length;
		str[0] = '-';
		number *= -1;
	}
	while (length != 0)
	{
		str[length--] = BASE[number % base];
		number /= base;
	}
	return (str);
}
