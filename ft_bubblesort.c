/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bubblesort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmillon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:54:35 by gmillon           #+#    #+#             */
/*   Updated: 2022/05/19 14:38:09 by gmillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	swap(int *copy, int i, int *made_change)
{
	int	tmp;

	*made_change = 1;
	tmp = copy[i];
	copy[i] = copy[i + 1];
	copy[i + 1] = tmp;
}

int	*ft_bubble_sort_copy(int *tab, int size)
{
	int	i;
	int	j;
	int	*copy;
	int	made_change;

	copy = malloc(sizeof(int) * size);
	ft_memcpy(copy, tab, size * sizeof(int));
	i = 0;
	j = 0;
	made_change = 1;
	while (j <= size && made_change)
	{
		i = 0;
		made_change = 0;
		while (i < size - 1)
		{
			if (copy[i] > copy[i + 1])
				swap(copy, i, &made_change);
			i++;
		}
		j++;
	}
	return (copy);
}

void	ft_bubble_sort(int *tab, int size)
{
	int	i;
	int	j;
	int	made_change;

	i = 0;
	j = 0;
	made_change = 1;
	while (j <= size && made_change)
	{
		i = 0;
		made_change = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
				swap(tab, i, &made_change);
			i++;
		}
		j++;
	}
}
