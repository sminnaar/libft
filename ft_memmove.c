/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sminnaar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 12:23:56 by sminnaar          #+#    #+#             */
/*   Updated: 2019/06/05 12:58:57 by sminnaar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;

	if (src == NULL && dst == NULL)
		return (NULL);
	if (dst > src)
	{
		i = len;
		while (i--)
			*(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
	}
	else if (dst < src)
		ft_memcpy(dst, src, len);
	return (dst);
}
