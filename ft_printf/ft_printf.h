/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 18:08:25 by jmartin           #+#    #+#             */
/*   Updated: 2021/11/08 20:30:27 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./libft/libft.h"
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>

int		ft_printf(const char *str, ...);
int		ft_printf_char(int c, int *rcount);
int		ft_printf_str(char *str, int *rcount);
int		ft_printf_ptr(void *ptr, int *rcount);
int		ft_printf_int(int nbr, int *rcount);
int		ft_printf_dun(unsigned int nbr, int *rcount);
int		ft_print_hex_min(unsigned long nbr, int *rcount);
int		ft_print_hex_upper(unsigned long nbr, int *rcount);
int		ft_numiterate(unsigned long n);

char	*ft_revchar_tab(char *tab, int size);
char	*ft_convert_hex_min(unsigned long nbr);
char	*ft_convert_hex_upper(unsigned long nbr);

#endif
