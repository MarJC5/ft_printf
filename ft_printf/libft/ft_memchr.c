/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 11:44:15 by jmartin           #+#    #+#             */
/*   Updated: 2021/10/14 12:06:56 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	char	*sstr;
	size_t	i;

	i = -1;
	sstr = (char *)str;
	while (++i < n)
		if (sstr[i] == (char)c)
			return ((char *)sstr + i);
	return (NULL);
}
