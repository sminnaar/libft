/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sminnaar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 14:44:32 by sminnaar          #+#    #+#             */
/*   Updated: 2019/05/20 10:11:36 by sminnaar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, int c, unsigned long len)
{
		unsigned char *a;

		a = (char *)b
		while (len > 0)
		{
			b[len - 1] = (unsigned char)c;
			len--;
		}
	return (b);
}
