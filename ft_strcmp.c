/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sminnaar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 15:02:13 by sminnaar          #+#    #+#             */
/*   Updated: 2019/05/27 11:18:08 by sminnaar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t i;

	i = 0;
	if (!s1 || !s2)
		return (1);
	while (s1[i] != '\0' && s1[i] == s2[i])
		i++;
	return ((unsigned char)ft_strlen(s1) - (unsigned char)ft_strlen(s2));
}
