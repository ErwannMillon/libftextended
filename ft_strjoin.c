/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmillon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 18:40:37 by gmillon           #+#    #+#             */
/*   Updated: 2022/09/07 14:46:33 by gmillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	arr_len(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
		i++;
	return (i);
}

static int	ft_strcpy_reti(char *dest, const char *src)
{
	int		i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (i);
}

char	*ft_join_arr_by_str(char **arr, char *str_delimiter)
{
	int		i;
	int		total_len;
	char	*str;

	i = 0;
	total_len = 0;
	while (arr[i])
	{
		total_len += ft_strlen(arr[i]);
		i++;
	}
	str = malloc(total_len + arr_len(arr) + 2);
	str[0] = 0;
	i = 0;
	ft_strncat(str, str_delimiter, 1);
	while (arr[i])
	{
		ft_strncat(str, arr[i], ft_strlen(arr[i]));
		if (arr[i + 1])
			ft_strncat(str, str_delimiter, 1);
		i++;
	}
	return (str);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		totallen;
	char	*joined;
	int		i;
	int		k;

	k = 0;
	i = 0;
	totallen = ft_strlen(s1);
	totallen += ft_strlen(s2);
	joined = malloc(totallen + 1);
	if (!joined)
		return (NULL);
	i = ft_strcpy_reti(joined, s1);
	while (s2[k])
	{
		joined[i] = s2[k];
		i++;
		k++;
	}
	joined[i] = 0;
	return (joined);
}

// int main(void)
// {
// 	printf("%s\n", ft_strjoin("tripouille", "42"));
// }