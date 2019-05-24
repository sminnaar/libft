/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sminnaar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 11:56:11 by sminnaar          #+#    #+#             */
/*   Updated: 2019/05/24 13:13:32 by sminnaar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, unsigned long n)
{
/*	unsigned int i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	while (i <= n)
	{
		++s1;
		++s2;
	}
	if (*s1 == *s2)
		return (1);
	return (ft_strncmp(s1, s2, n) ? 0 : 1);
}*/
	if (n == 0)
		return (1);
	if (!s1 || !s2)
		return (0);
	while (--n && *s1 && *s2 && *s1 == *s2)
	{
		++s1;
		++s2;
	}
	if (*s1 == *s2)
		return (1);
	return (0);
}

