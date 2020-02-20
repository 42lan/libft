/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atolli.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 14:33:10 by amalsago          #+#    #+#             */
/*   Updated: 2020/02/20 15:15:30 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Converts string pointed to by str to long long int representation.
*/

long long int		ft_atolli(const char *str)
{
	int				i;
	int				neg;
	long long int	res;

	i = 0;
	res = 0;
	neg = 1;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			neg = -1;
	while (str[i] != '\0' && ft_isdigit(str[i]))
	{
		res = res * 10 + (str[i++] - '0');
		if (res < 0)
			return (neg == 1 ? -1 : 0);
	}
	return (res * neg);
}
