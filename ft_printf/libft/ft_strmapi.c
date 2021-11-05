/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 22:55:45 by jmartin           #+#    #+#             */
/*   Updated: 2021/10/22 09:50:19 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*s;

	i = -1;
	if (!str)
		return (NULL);
	s = malloc((ft_strlen(str) + 1) * sizeof(char));
	if (!s)
		return (NULL);
	while (++i < ft_strlen(str))
		s[i] = f(i, str[i]);
	s[i] = '\0';
	return (s);
}
