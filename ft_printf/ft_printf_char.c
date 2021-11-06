/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 12:37:37 by jmartin           #+#    #+#             */
/*   Updated: 2021/11/06 14:44:32 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_char(int c)
{
	if (ft_isprint(c))
		ft_putchar_fd((unsigned char)c, 1);
	else
		ft_putstr_fd("Invalid character", 1);
}
