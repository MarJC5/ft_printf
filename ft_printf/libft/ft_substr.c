/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 18:17:20 by jmartin           #+#    #+#             */
/*   Updated: 2021/10/22 15:12:49 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *str, unsigned int start, size_t len)
{
	size_t	i;
	char	*s;

	i = -1;
	if (!str)
		return (NULL);
	if (len > ft_strlen(str))
		len = ft_strlen(str);
	s = malloc((len + 1) * sizeof(char));
	if (!s)
		return (NULL);
	while (++i < len && start < ft_strlen(str))
		s[i] = str[start++];
	s[i] = '\0';
	return (s);
}
