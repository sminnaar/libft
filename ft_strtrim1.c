/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sminnaar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 11:47:52 by sminnaar          #+#    #+#             */
/*   Updated: 2019/06/10 11:58:40 by sminnaar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s)
{
	char *nstr;
	char *p;

	while (ft_iswht(s))
		s++;
	if (*s == '\0')
		return (ft_strcpy(ft_memalloc(sizeof(char) * 2), ""));
	if (!(nstr = (char *)ft_memalloc(sizeof(char) * ft_strlen(s))))
		return (NULL);
	p = nstr;
	while (s && !ft_iswht(s))
	{
		*p = *s;
		s++;
		p++;
		*p = '\0';
	}
	return (nstr)
}
