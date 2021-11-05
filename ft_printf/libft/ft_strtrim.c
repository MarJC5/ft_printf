/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 12:45:24 by jmartin           #+#    #+#             */
/*   Updated: 2021/10/22 11:30:47 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_isset(char const *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;

	if (!s1)
		return (NULL);
	i = 0;
	len = ft_strlen(s1);
	while (ft_isset(set, s1[i]) == 0)
		i++;
	while (ft_isset(set, s1[len - 1]) == 0)
		len--;
	return (ft_substr(s1, i, (len - i)));
}
