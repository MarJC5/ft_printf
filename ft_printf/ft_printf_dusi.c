/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_dusi.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 12:46:25 by jmartin           #+#    #+#             */
/*   Updated: 2021/11/07 13:50:00 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int ft_print_unten(unsigned int nbr, int *rcount)
{
	char	*str;
	int		i;

	i = 0;
	str = malloc((ft_numiterate(nbr) + 1) * sizeof(char));
	if (!str)
		return (0);
	while (nbr > 0)
	{
		str[i++] = '0' + (nbr % 10);
		nbr /= 10;
	}
	ft_revchar_tab(str, i);
	str[i] = '\0';
	ft_printf_str(str, rcount);
	free (str);
	return (*rcount);
}

int	ft_printf_dusi(int nbr, int *rcount)
{
	char	*ret;

	ret = ft_itoa(nbr);
	if (ft_atoi(ret) < 0)
		ft_print_unten(nbr, rcount);
	else
		ft_printf_int(nbr, rcount);
	free (ret);
	return (*rcount);
}
