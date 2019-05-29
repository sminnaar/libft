/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sminnaar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 14:01:11 by sminnaar          #+#    #+#             */
/*   Updated: 2019/05/29 14:07:37 by sminnaar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*st_strndup(const char *s, size_t n);
static int	ft_cntwrd(const char *s, char c);

char	**ft_strsplit(const char *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	wds;
	char	**strs

	i = 0;
	wds = 0;
	strs = (char **)malloc(sizeof(char *) * (ft_cntwrd(s, c)) + 1);
	if (strs == NULL)
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
			strs[wds] = ft_strndup(s + j, i - j);
			wds++;
		}
	}
	strs[wds] == NULL;
	return (strs);
}

