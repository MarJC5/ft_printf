/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 09:54:02 by jmartin           #+#    #+#             */
/*   Updated: 2021/10/21 11:31:38 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		sign;
	int		count;
	int		num;

	sign = 1;
	count = 0;
	num = 0;
	while (str[count] == ' '
		|| str[count] == '\f'
		|| str[count] == '\n'
		|| str[count] == '\r'
		|| str[count] == '\t'
		|| str[count] == '\v')
		count++;
	if (str[count] == '-')
		sign = -1;
	if (str[count] == '-' || str[count] == '+')
		count++;
	while (str[count] && ft_isdigit(str[count]))
		num = num * 10 + (str[count++] - '0');
	return (sign * num);
}
