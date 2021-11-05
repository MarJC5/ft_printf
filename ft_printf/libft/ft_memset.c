/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 22:31:01 by jmartin           #+#    #+#             */
/*   Updated: 2021/10/14 10:44:38 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *buf, int c, size_t n)
{
	unsigned char	*str;

	str = buf;
	while (n > 0)
	{
		*str = (unsigned char)c;
		str++;
		n--;
	}
	return (buf);
}
