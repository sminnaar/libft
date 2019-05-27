/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sminnaar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 12:33:43 by sminnaar          #+#    #+#             */
/*   Updated: 2019/05/27 11:07:05 by sminnaar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main()
{
	char s1[] = "Hello this is a test i'm running";
	char s2[] = "Hello this is";

	ft_putstr(ft_strcpy(s1, s2));
	ft_putchar('\n');
	ft_putnbr(ft_strcmp(s2, s1));
	ft_putchar('\n');
	ft_strclr(s1);
	ft_putstr(s1);
	/*ft_putstr("Alpa:");
	ft_putnbr(ft_isalpha('A'));
	ft_putchar('\n');
	ft_putnbr(42);//ft_strnequ(s1, s2, 3));
	ft_putchar('\n');
	ft_putstr("Equ:");
	ft_putnbr(ft_strnequ(s1, s2, 3));
	ft_putchar('\n');
	ft_putstr("Cmp:");
	ft_putnbr(ft_strncmp(s1, s2, 3));
	ft_putchar('\n');
	ft_putstr("Equ:");
	ft_putnbr(ft_strnequ(s1, s2, 3));
	ft_putchar('\n');*/
	return (0);
}
