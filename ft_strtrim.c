/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sminnaar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 13:45:06 by sminnaar          #+#    #+#             */
/*   Updated: 2019/05/31 14:56:03 by sminnaar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s)
{
	char *nstr;

	if (!s || !(nstr = (char *)malloc(sizeof(char) * (ft_strlen(s) - diff + 1))))
		return (NULL)

