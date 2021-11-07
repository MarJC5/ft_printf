/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 18:08:17 by jmartin           #+#    #+#             */
/*   Updated: 2021/11/07 04:44:55 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_printf_args(char convert, va_list args, int *rcount)
{
	if (convert == 'c')
		ft_printf_char(va_arg(args, int), rcount);
	else if (convert == 's')
		ft_printf_str(va_arg(args, char *), rcount);
	else if (convert == 'i')
		ft_printf_int(va_arg(args, signed int), rcount);
	else if (convert == 'x')
		ft_printf_str(ft_printf_hex(va_arg(args, int)), rcount);
	else if (convert == 'X')
		ft_printf_str(ft_printf_hex_upper(va_arg(args, int)), rcount);
	else if (convert == '%')
		ft_printf_char('%', rcount);
	/*else if (convert == 'p')
		ft_printf_ptr(va_arg(args, char *));
	*/
}

int	ft_printf(const char *input, ...)
{
	int		i;
	int		rcount;
	va_list	args;

	i = 0;
	rcount = 0;
	va_start(args, input);
	while (input[i])
	{
		if (input[i] != '%')
			ft_printf_char(input[i], &rcount);
		else if (input[i] == '%' && input[i + 1] == '%')
			ft_printf_args(input[++i], args, &rcount);
		else if (input[i] == '%' && input[i + 1])
			ft_printf_args(input[++i], args, &rcount);
		i++;
	}
	va_end(args);
	return (rcount);
}
