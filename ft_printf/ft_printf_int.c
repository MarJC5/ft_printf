/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 21:57:24 by jmartin           #+#    #+#             */
/*   Updated: 2021/11/08 18:36:52 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_int(int nbr, int *rcount)
{
	char	*ret;

	ret = ft_itoa(nbr);
	ft_putnbr_fd(nbr, 1);
	*rcount += ft_strlen(ret);
	free(ret);
	return (*rcount);
}
