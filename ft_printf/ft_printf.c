/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 18:08:17 by jmartin           #+#    #+#             */
/*   Updated: 2021/11/06 15:17:42 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_printf_args(char convert, va_list args)
{
	if (convert == 'c')
		ft_printf_char(va_arg(args, int));
	else if (convert == 's')
		ft_printf_str(va_arg(args, char *));
	else if (convert == 'p')
		ft_printf_ptr(va_arg(args, char *));
}

int	ft_printf(const char *input, ...)
{
	int	i;
	int	args_count;
	va_list	args;

	i = 0;
	args_count = 0;
	va_start(args, input);
	while (input[i])
	{
		if (input[i] != '%')
			ft_putchar_fd(input[i], 1);
		else if (input[i] == '%' && input[i + 1])
			ft_printf_args(input[++i], args);
		i++;
	}
	va_end(args);
	return (args_count);
}

int	main(void)
{
	ft_printf("COUCOU %s TEST %c", "insert me in the middle", 122);
	return (0);
}
