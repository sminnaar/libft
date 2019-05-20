/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sminnaar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 13:50:33 by sminnaar          #+#    #+#             */
/*   Updated: 2019/05/20 17:00:19 by sminnaar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	unsigned long	i;

	i = 0;
	while (src[i] != dst[i])
	{
		dst[i] == src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
