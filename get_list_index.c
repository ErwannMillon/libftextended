/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_list_index.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmillon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:32:44 by gmillon           #+#    #+#             */
/*   Updated: 2022/05/20 15:12:25 by gmillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_get_arr_index(int search, int *arr, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (arr[i] == search)
			return (i);
		i++;
	}
	return (-1);
}
