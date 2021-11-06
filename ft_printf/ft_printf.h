/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 18:08:25 by jmartin           #+#    #+#             */
/*   Updated: 2021/11/06 23:34:34 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./libft/libft.h"
# include <stdarg.h>

int		ft_printf(const char *str, ...);
int		ft_printf_char(int c);
int		ft_printf_int(int nbr);
int		ft_printf_dec(int nbr);

void	ft_printf_str(char *str);
void	ft_printf_ptr(char *str);

char	*ft_printf_hex(int nbr);
char	*ft_printf_hex_upper(int nbr);

#endif
