/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sminnaar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 11:06:27 by sminnaar          #+#    #+#             */
/*   Updated: 2019/06/10 13:41:55 by sminnaar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *p;

	p = (char *)s;
	while (p && *p != '\0')
	{
		if (*p == c)
			return (p);
		p++;
	}
	if (!c && *p == '\0')
		return (p);
	return (NULL);
}
