/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_qsort_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 13:46:40 by amalsago          #+#    #+#             */
/*   Updated: 2020/02/29 14:32:57 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_partition(int *array, int lo, int hi)
{
	int			i;
	int			j;
	int			pivot;

	i = lo;
	j = lo - 1;
	pivot = array[hi];
	while (i <= hi - 1)
	{
		if (array[i] <= pivot)
		{
			++j;
			ft_swap(&array[i], &array[j], sizeof(int));
		}
		++i;
	}
	ft_swap(&array[j + 1], &array[hi], sizeof(int));
	return (j + 1);
}

void			ft_qsort_int(int *array, int lo, int hi)
{
	int			pivot;

	if (lo < hi)
	{
		pivot = ft_partition(array, lo, hi);
		ft_qsort_int(array, lo, pivot - 1);
		ft_qsort_int(array, pivot + 1, hi);
	}
}
