/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 07:13:15 by jmartin           #+#    #+#             */
/*   Updated: 2021/10/18 09:31:43 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t ecount, size_t esize)
{
	void	*ptr;

	ptr = malloc(ecount * esize);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, ecount * esize);
	return (ptr);
}
