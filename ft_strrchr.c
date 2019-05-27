/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sminnaar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 12:08:07 by sminnaar          #+#    #+#             */
/*   Updated: 2019/05/27 12:12:01 by sminnaar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(const char *s, int c)
{
	size_t i;

	i = ft_strlen(s);
	while (i != s[0] || i != c)
		i--;
	if (s[i] = c)
		return (*s[i]);
	else
		return (NULL);
}
