/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 13:50:03 by jmartin           #+#    #+#             */
/*   Updated: 2021/11/08 20:55:49 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_itoa_base(unsigned long nbr, int base)
{
	char	*hex;
	int		rest;
	int		i;

	rest = 0;
	i = 0;
	if (nbr == 0)
		return (ft_strdup("0"));
	hex = (char *)malloc((ft_numiterate(nbr) + 1) * sizeof(char));
	if (!hex)
		return (NULL);
	while (nbr != 0)
	{
		rest = nbr % base;
		if (rest < 10 || base == 10)
			hex[i++] = 48 + rest;
		else
			hex[i++] = 87 + rest;
		nbr = nbr / base;
	}
	hex[i] = '\0';
	hex = ft_revchar_tab(hex, i);
	return (hex);
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
