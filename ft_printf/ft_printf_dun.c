/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_dun.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 20:12:47 by jmartin           #+#    #+#             */
/*   Updated: 2021/11/08 20:30:20 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*ft_putdun_base(unsigned int nbr, int base)
{
	char	*str;
	int		i;

	i = 0;
	if (nbr == 0)
		return (ft_strdup("0"));
	str = malloc((ft_numiterate(nbr) + 1) * sizeof(char));
	if (!str)
		return (0);
	while (nbr > 0)
	{
		str[i++] = '0' + (nbr % base);
		nbr /= base;
	}
	ft_revchar_tab(str, i);
	str[i] = '\0';
	return (str);
}

int	ft_printf_dun(unsigned int nbr, int *rcount)
{
	char	*ret;

	ret = ft_putdun_base(nbr, 10);
	ft_putstr_fd(ret, 1);
	*rcount += ft_strlen(ret);
	free(ret);
	return (*rcount);
}
