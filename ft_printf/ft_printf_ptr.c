/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 11:06:04 by jmartin           #+#    #+#             */
/*   Updated: 2021/11/07 11:55:23 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_ptr(void *ptr, int *rcount)
{
	ft_printf_str("0x", rcount);
	ft_printf_str(ft_printf_hex((unsigned long int)ptr), rcount);
	return (*rcount);
}
