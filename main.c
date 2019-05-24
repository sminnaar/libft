/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sminnaar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 12:33:43 by sminnaar          #+#    #+#             */
/*   Updated: 2019/05/24 13:24:47 by sminnaar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main()
{
	char s2[] = "Hello";
	char s1[] = "Hel";

	ft_putstr("Alpa:");
	ft_putnbr(ft_isalpha('A'));
	ft_putchar('\n');
	ft_putnbr(42);//ft_strnequ(s1, s2, 3));
	ft_putchar('\n');
	ft_putstr("Equ:");
	ft_putnbr(ft_strnequ(s1, s2, 3));
	ft_putchar('\n');
	ft_putstr("Cmp:");	
	ft_putnbr(ft_strcmp(s1, s2));
	ft_putchar('\n');
	ft_putstr("Equ:");
	ft_putnbr(ft_strnequ(s1, s2, 3));
	ft_putchar('\n');
	return (0);
}
