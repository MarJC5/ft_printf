/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 15:33:47 by jmartin           #+#    #+#             */
/*   Updated: 2021/11/08 13:11:35 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_convert_hex_min(unsigned long nbr)
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
		rest = nbr % 16;
		if (rest < 10)
			hex[i++] = 48 + rest;
		else
			hex[i++] = 87 + rest;
		nbr = nbr / 16;
	}
	hex[i] = '\0';
	hex = ft_revchar_tab(hex, i);
	return (hex);
}

char	*ft_convert_hex_upper(unsigned long nbr)
{
	char	*hex;
	size_t	i;

	i = -1;
	hex = ft_convert_hex_min(nbr);
	while (++i <= ft_strlen(hex))
		hex[i] = ft_toupper(hex[i]);
	return (hex);
}

void	ft_print_hex_min(unsigned long nbr, int *rcount)
{
	char *hex;

	hex = ft_convert_hex_min(nbr);
	ft_printf_str(hex, rcount);
	free (hex);
	hex = NULL;
}

void	ft_print_hex_upper(unsigned long nbr, int *rcount)
{
	char *hex;

	hex = ft_convert_hex_upper(nbr);
	ft_printf_str(hex, rcount);
	free (hex);
	hex = NULL;
}

/*
Hexadecimal numbers uses 16 values to represent a number.
Numbers from 0-9 are expressed by digits 0-9 and
10-15 are represented by characters from A – F.

Check if the rest is less than 10.
If it is, then add 48 to the rest and store the result in the array hex.
Otherwise, add 87 to the rest and store the result in the array hex.
*/
