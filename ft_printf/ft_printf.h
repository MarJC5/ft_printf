/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 18:08:25 by jmartin           #+#    #+#             */
/*   Updated: 2021/11/07 04:10:14 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./libft/libft.h"
# include <stdarg.h>

int		ft_printf(const char *str, ...);
int		ft_printf_char(int c, int *rcount);
int		ft_printf_str(char *str, int *rcount);
int		ft_printf_int(int nbr, int *rcount);

char	*ft_printf_hex(int nbr);
char	*ft_printf_hex_upper(int nbr);

#endif
