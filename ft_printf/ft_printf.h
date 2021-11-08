/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 18:08:25 by jmartin           #+#    #+#             */
/*   Updated: 2021/11/08 07:13:00 by jmartin          ###   ########.fr       */
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
int		ft_printf_dusi(int nbr, int *rcount);

int		ft_numiterate(int n);

char	*ft_revchar_tab(char *tab, int size);

char	*ft_printf_hex(unsigned long int nbr);
char	*ft_printf_hex_upper(unsigned long int nbr);

#endif
