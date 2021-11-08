/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 13:09:24 by jmartin           #+#    #+#             */
/*   Updated: 2021/11/08 07:37:39 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_str(char *str, int *rcount)
{
	if (str == NULL)
	{
		ft_putstr_fd("(null)", 1);
		*rcount += ft_strlen("(null)");
	}
	else
	{
		ft_putstr_fd(str, 1);
		*rcount += ft_strlen(str);
	}
	return (*rcount);
}
