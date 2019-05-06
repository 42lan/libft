/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_static.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/05 17:45:27 by amalsago          #+#    #+#             */
/*   Updated: 2019/05/06 15:49:56 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_itoa_static(intmax_t nbr)
{
	static char		str[12];
	size_t			length;

	length = ft_silen(nbr, 10);
	str[length] = '\0';
	if (nbr == 0)
		str[0] = '0';
	else if (nbr < 0)
	{
		str[0] = '-';
		nbr *= -1;
	}
	while (nbr > 0)
	{
		str[--length] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (str);
}
