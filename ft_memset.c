/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sminnaar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 14:44:32 by sminnaar          #+#    #+#             */
/*   Updated: 2019/05/23 09:50:32 by sminnaar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, unsigned long len)
{
	char *a;

	a = (char *)b;
	while (len > 0)
	{
		a[len - 1] = (unsigned char )c;
		len--;
	}
	return (b);
}
