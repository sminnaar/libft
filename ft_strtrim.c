/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sminnaar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 12:23:03 by sminnaar          #+#    #+#             */
/*   Updated: 2019/06/10 13:17:46 by sminnaar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s)
{
	int		end;
	int		start;

	if (!s)
		return (NULL);
	start = 0;
	end = ft_strlen(s) - 1;
	while (ft_iswht(s[start]))
		start++;
	if (s[start] == '\0')
		return (ft_strnew(0));
	while (ft_iswht(s[end]))
		end--;
	return (ft_strsub(s, start, end - start + 1));
}
