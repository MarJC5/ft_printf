/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 21:57:24 by jmartin           #+#    #+#             */
/*   Updated: 2021/11/07 04:13:58 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_int(int nbr, int *rcount)
{
	char *ret;

	ret = ft_itoa(nbr);
	ft_printf_str(ret, rcount);
	free(ret);
	return (*rcount);
}
