/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sminnaar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 12:14:09 by sminnaar          #+#    #+#             */
/*   Updated: 2019/05/28 09:35:45 by sminnaar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (*(s1 + i) && *(s1 + i) == *(s2 + i) && i < n - 1)
		i++;
	return (*((unsigned char *)s1 + i) - *((unsigned char *)s2 + i));
	ft_putchar('\n');
}
