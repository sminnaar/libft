/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sminnaar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 11:16:01 by sminnaar          #+#    #+#             */
/*   Updated: 2019/06/14 11:33:11 by sminnaar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strcpy(char *dst, const char *src);

char *ft_itoa2(int c)
{
	char * str;

	if (!(str = (char *)malloc(sizeof(char) * 2)))
		return (NULL);
	if (c == -2147483648)
		return (ft_strcpy(str, "-2147483648"));
	if (c < 0)
	{
		str[0] = '-';
		str[1] = '\0';
		str = ft_strjoin(str, ft_itoa2(-c));
	}
	else if (c >= 10)
		str = ft_strjoin(ft_itoa2(c / 10), ft_itoa2(c % 10));
	else if (c >= 0 && c <= 9)
	{
		str[0] = c + '0';
		str[1] = '\0';
	}
	return (str);
}
