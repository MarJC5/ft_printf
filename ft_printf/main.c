/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 23:55:57 by jmartin           #+#    #+#             */
/*   Updated: 2021/11/07 13:08:28 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	char 	ch = 65;
	char	ptr[] = "0x";
	char 	str[] = "Hello world!";
	int		integer = 1234;
	int		hex = 170778;
	int		dec = 00012;


	ft_printf("\n\033[1m====== FT_PRINTF ======\033[0m\n");
	ft_printf("\033[1;32mString:\033[0m %s\n\033[1;32mCharacter:\033[0m %c\n", str, ch);
	ft_printf("\033[1;32mInteger:\033[0m %i\n\033[1;32mHexadecimal:\033[0m %x / %X\n", integer, hex, hex);
	ft_printf("\033[1;32mPointer:\033[0m %p\n", ptr);
	ft_printf("\033[1;32mDecimal:\033[0m %d\n", dec);
	ft_printf("\033[1;32mPercent:\033[0m %%\n\n");

	printf("\n\n\033[1m====== PRINTF ======\033[0m\n");
	printf("\033[1;32mString:\033[0m %s\n\033[1;32mCharacter:\033[0m %c\n", str, ch);
	printf("\033[1;32mInteger:\033[0m %i\n\033[1;32mHexadecimal:\033[0m %x / %X\n", integer, hex, hex);
	printf("\033[1;32mPointer:\033[0m %p\n", ptr);
	printf("\033[1;32mDecimal:\033[0m %d\n", dec);
	printf("\033[1;32mPercent:\033[0m %%\n\n");

	return (0);⁄
}
