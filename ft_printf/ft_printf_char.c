/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 12:37:37 by jmartin           #+#    #+#             */
/*   Updated: 2021/11/08 13:22:06 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_char(int c, int *rcount)
{
	if (c == 0)
		ft_putchar_fd((unsigned char) '\0', 1);
	else if (ft_isascii(c))
		ft_putchar_fd((unsigned char)c, 1);
	else if (!ft_isprint(c))
		ft_putchar_fd((unsigned char) '0', 1);
	*rcount += 1;
	return (*rcount);
}
