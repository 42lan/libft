/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ca2ia.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 23:53:51 by amalsago          #+#    #+#             */
/*   Updated: 2020/02/22 01:22:04 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				*ft_ca2ia(char **char_array)
{
	int			i;
	int			array_size;
	int			*int_array;

	i = -1;
	array_size = ft_arraysize(char_array);
	if (!(int_array = (int *)ft_memalloc(sizeof(int) * array_size)))
		return (NULL);
	--array_size;
	while (array_size >= 0)
	{
		++i;
		--array_size;
		int_array[i] = ft_atoi(char_array[i]);
	}
	return (int_array);
}
