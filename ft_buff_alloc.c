/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buff_alloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmillon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 14:46:26 by gmillon           #+#    #+#             */
/*   Updated: 2022/10/10 03:20:25 by gmillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**double_pointer_realloc(char **old, int new_size)
{
	char		**new;
	int			i;

	i = 0;
	new = malloc((new_size + 1) * sizeof(char *));
	if (!new)
		return (NULL);
	while (old[i])
	{
		new[i] = old[i];
		i++;
	}
	new[i] = 0;
	free(old);
	return (new);
}

void	*ft_realloc(void *old, size_t old_size, size_t new_size)
{
	void		*new;
	int			i;

	i = 0;
	new = malloc(new_size + 1);
	if (!new)
		return (NULL);
	while (((char *)old)[i])
	{
		((char *)new)[i] = ((char *)old)[i];
		i++;
	}
	ft_memcpy(new, old, old_size);
	free(old);
	return ((void *)new);
}

char	*buffer_realloc(char *old, int buff_size)
{
	char		*new;
	static int	size = 1;
	int			i;

	i = 0;
	size += buff_size;
	new = malloc(size + 1);
	if (!new)
		return (NULL);
	while (old[i])
	{
		new[i] = old[i];
		i++;
	}
	new[i] = 0;
	free(old);
	return (new);
}
