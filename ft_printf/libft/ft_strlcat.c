/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 15:54:44 by jmartin           #+#    #+#             */
/*   Updated: 2021/10/22 14:55:31 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i_dst;
	size_t	i_src;
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i_dst = dst_len;
	i_src = 0;
	if (n < dst_len)
		return (src_len + n);
	else if (n > dst_len)
	{
		while (i_src < src_len && i_dst < (n - 1))
			dst[i_dst++] = src[i_src++];
		dst[i_dst] = '\0';
	}
	return (dst_len + src_len);
}
