/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 15:33:47 by jmartin           #+#    #+#             */
/*   Updated: 2021/11/08 21:42:13 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_hex(unsigned long nbr, int *rcount, int format)
{
	char	*ret;
	int		i;

	i = -1;
	ret = NULL;
	if (format == 'x' || format == 'X')
	{
		ret = ft_itoa_base((unsigned int)nbr, 16);
		if (format == 'x')
			while (ret[++i])
				ft_putchar_fd(ret[i], 1);
		else if (format == 'X')
			while (ret[++i])
				ft_putchar_fd(ft_toupper(ret[i]), 1);
	}
	else if (format == 'p')
	{
		ret = ft_itoa_base(nbr, 16);
		while (ret[++i])
			ft_putchar_fd(ret[i], 1);
	}
	free(ret);
	*rcount += i;
	return (*rcount);
}

/*
Hexadecimal numbers uses 16 values to represent a number.
Numbers from 0-9 are expressed by digits 0-9 and
10-15 are represented by characters from A – F.

Check if the rest is less than 10.
If it is, then add 48 to the rest and store the result in the array hex.
Otherwise, add 87 to the rest and store the result in the array hex.
*/
