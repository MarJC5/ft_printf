/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 15:33:47 by jmartin           #+#    #+#             */
/*   Updated: 2021/11/07 04:33:39 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*ft_revchar_tab(char *tab, int size)
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

static int	ft_numiterate(int n)
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

char	*ft_printf_hex(int nbr)
{
	char 	*ret;
	char	*hex;
	int		rest;
	int		i;

	rest = 0;
	i = 0;
	if ((unsigned int)nbr == 0)
		return ("0");
	hex = (char *)malloc(ft_numiterate(nbr) + 1 * sizeof(char));
	if (!hex)
		return (0);
	while ((unsigned int)nbr != 0)
	{
		rest = (unsigned int)nbr % 16;
		if (rest < 10)
			hex[i++] = 48 + rest;
		else
			hex[i++] = 87 + rest;
		nbr = (unsigned int)nbr / 16;
	}
	hex[i] = '\0';
	ret = ft_revchar_tab(hex, i);
	free(hex);
	return (ret);
}

char	*ft_printf_hex_upper(int nbr)
{
	char	*hex;
	size_t	i;

	i = -1;
	if (nbr == 0)
		return ("0");
	hex = ft_printf_hex(nbr);
	while (++i <= ft_strlen(hex))
		hex[i] = ft_toupper(hex[i]);
	return (hex);
}

/*
Hexadecimal numbers uses 16 values to represent a number.
Numbers from 0-9 are expressed by digits 0-9 and
10-15 are represented by characters from A – F.

Check if the rest is less than 10.
If it is, then add 48 to the rest and store the result in the array hex.
Otherwise, add 55 to the rest and store the result in the array hex.
*/
