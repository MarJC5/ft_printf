/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 18:08:17 by jmartin           #+#    #+#             */
/*   Updated: 2021/11/05 19:07:24 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str)
{
	ft_putstr_fd((char *)str, 1);
	return (0);
}

int	main(int argc, char *argv[])
{
	if (argc != 2)
		ft_putendl_fd("\n\033[1;33m(ง •̀_•́)ง\033[0m Enter a value in double quote to print the result.\n", 2);
	else
		ft_printf(argv[argc - 1]);
	return (0);
}
