/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ca2ia.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 23:53:51 by amalsago          #+#    #+#             */
/*   Updated: 2020/02/23 11:41:57 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_ca2ia() allocates enough memory to store integers extracted from a given
** array of chars.
** The first element of `char_array` will be at the last position of `int_array`
**
** Example:
**    Given char_array = ["1", "2", "3", "4", "5"]
**    Calling ft_ca2ia(char_array) return int_array = [5, 4, 3, 2, 1]
*/

int				*ft_ca2ia(char **char_array)
{
	int			i;
	int			array_size;
	int			*int_array;

	i = 0;
	array_size = ft_arraysize(char_array);
	if (!(int_array = (int *)ft_memalloc(sizeof(int) * array_size)))
		return (NULL);
	--array_size;
	while (array_size >= 0)
		int_array[i++] = ft_atoi(char_array[array_size--]);
	return (int_array);
}
