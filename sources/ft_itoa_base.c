/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 00:39:03 by amalsago          #+#    #+#             */
/*   Updated: 2019/04/17 00:46:15 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_silen(intmax_t number, int base)
{
	size_t		length;

	length = 0;
	if (number == 0)
		return (1);
	if (number < 0)
		length = 1;
	while (number != 0)
	{
		number /= base;
		++length;
	}
	return (length);
}

char			*ft_sitoa_base(intmax_t number)
{
	char		str[];
	size_t		length;

	length = ft_silen(number);
}
