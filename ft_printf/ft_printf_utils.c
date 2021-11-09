/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 13:50:03 by jmartin           #+#    #+#             */
/*   Updated: 2021/11/09 09:32:31 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_itoa_base(unsigned long nbr, int base)
{
	char	*str;
	int		rest;
	int		i;

	rest = 0;
	i = 0;
	if (nbr == 0)
		return (ft_strdup("0"));
	str = (char *)malloc((ft_numiterate(nbr) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (nbr != 0)
	{
		rest = nbr % base;
		if (rest < 10 || base == 10)
			str[i++] = 48 + rest;
		else
			str[i++] = 87 + rest;
		nbr = nbr / base;
	}
	str[i] = '\0';
	str = ft_revchar_tab(str, i);
	return (str);
}

char	*ft_revchar_tab(char *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size)
	{
		temp = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = temp;
		i++;
		size--;
	}
	return (tab);
}

int	ft_numiterate(unsigned long n)
{
	int	i;

	i = 1;
	if (n == 0)
		return (i);
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}
