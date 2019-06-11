/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sminnaar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 10:38:42 by sminnaar          #+#    #+#             */
/*   Updated: 2019/06/10 16:35:18 by sminnaar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t dlen;
	size_t slen;

	slen = 0;
	dlen = ft_strlen(dst);
	while (*dst != '\0')
		dst++;
	while (src[slen] && dlen + slen < dstsize - 1 && dstsize > 0)
	{
		*dst = src[slen];
		dst++;
		slen++;
		*dst = '\0';
	}
	if (dstsize < slen + dlen)
		return (dstsize + ft_strlen(src));
	return (dlen + ft_strlen(src));
}
