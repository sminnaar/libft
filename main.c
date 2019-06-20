/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sminnaar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 11:28:10 by sminnaar          #+#    #+#             */
/*   Updated: 2019/06/14 11:36:58 by sminnaar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa2(int c);

int main(void)
{
	int r;
	int r2;

	r2 = -236789098;
	r = 8293567;
	ft_putnbr(r);
	ft_putchar('\n');
	ft_putendl(ft_itoa2(r));
	ft_putnbr(r2);
	ft_putchar('\n');
	ft_putendl(ft_itoa2(r2));

	
	return (0);
}
