/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sminnaar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 12:23:03 by sminnaar          #+#    #+#             */
/*   Updated: 2019/06/03 14:50:08 by sminnaar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s)
{
	char	*nstr;
	size_t	i;
	size_t	j;
	size_t	k;

	k = 0;
	i = 0;
	if (!s)
		return (NULL);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	if (s[i] == '\0')
		return (ft_strcpy(malloc(sizeof(char) * 2), ""));
	j = ft_strlen(s) - 1;
	while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t')
		j--;
	if (!(nstr = (char *)malloc(sizeof(char) * (j - i + 2))))
		return (NULL);
	while (k < j - i + 1)
	{
		nstr[k] = s[i + k];
		k++;
	}
	nstr[k] = '\0';
	return (nstr);
}
