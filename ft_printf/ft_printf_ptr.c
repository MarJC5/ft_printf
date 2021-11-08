/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 11:06:04 by jmartin           #+#    #+#             */
/*   Updated: 2021/11/08 07:56:46 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_ptr(void *ptr, int *rcount)
{
	char	*ret;

	ret = ft_printf_hex((unsigned long int)ptr);
	ft_printf_str("0x", rcount);
	ft_printf_str(ret, rcount);
	//printf(" \033[0;33mSTR PTR: %ld\033[0m ", 0x7fbf9f604000);
	return (*rcount);
}
