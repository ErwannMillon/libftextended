/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmillon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:33:04 by gmillon           #+#    #+#             */
/*   Updated: 2022/11/16 09:14:58 by gmillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

static int	ft_isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int	ft_isalnum(int c)
{
	if ((ft_isupper(c) || ft_islower(c) || (c >= 48 && c <= 57)))
		return (1);
	return (0);
}

int	ft_str_is_num(char *s)
{
	while(s && *s >= 48 && *s <= 57)
		s++;
	return (*s);
}
