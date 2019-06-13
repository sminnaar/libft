/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sminnaar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 14:01:11 by sminnaar          #+#    #+#             */
/*   Updated: 2019/06/13 12:17:17 by sminnaar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wrdcnt(const char *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] && (s[i] != c))
			i++;
	}
	return (count);
}

static char	*ft_strxdup(const char *s, size_t n)
{
	char	*str;

	if (!(str = (char *)ft_memalloc(sizeof(char) * (n + 1))))
		return (NULL);
	str = ft_strncpy(str, s, n);
	str[n] = '\0';
	return (str);
}

char		**ft_strsplit(const char *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	wds;
	char	**n;

	i = 0;
	wds = 0;
	if (!s || (!(n = (char **)malloc(sizeof(char *) * (ft_wrdcnt(s, c)) + 1))))
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > j)
		{
			n[wds] = ft_strxdup(s + j, i - j);
			wds++;
		}
	}
	n[wds] = NULL;
	return (n);
}
