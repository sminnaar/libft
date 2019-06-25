/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sminnaar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 14:38:03 by sminnaar          #+#    #+#             */
/*   Updated: 2019/06/25 16:50:37 by sminnaar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long	out;
	int		p_n;
	long	i;

	out = 0;
	p_n = 1;
	i = 0;
	while (ft_iswht(str[i]))
		i++;
	if (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			p_n = -1;
		i++;
	}
	while (str && str[i] >= 48 && str[i] <= 57)
	{
		if (out < 0)
			return (0 - (p_n == 1));
		out = (out * 10) + (str[i] - 48);
		i++;
	}
	return ((int)(out * p_n));
}
