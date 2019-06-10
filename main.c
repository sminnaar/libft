/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sminnaar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 12:33:43 by sminnaar          #+#    #+#             */
/*   Updated: 2019/06/10 11:05:27 by sminnaar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main()
{
	char *s1 = ft_strdup("the cake is a lie !\0I'm hidden lol\r\n");
	char *bz = ft_strdup("the cake is a lie!I'm hidden lol\r\n");
	char *s2 = "added on";
	char *atoi = "-23412415rr";
	char *atoi2 = "75782389";
	char *atoi3 = "757igslkj82389";
	char *strtrim = ft_strdup("     	 33Freatag   sgfsgf Hallo 	 	 ");
	size_t max = ft_strlen(s1) + ft_strlen(s2 + 1);
	
	//ft_strtrim
	ft_putstr(ft_strtrim(strtrim));

	//ft_atoi Test
	ft_putendl("1: ft_atoi test:");
	ft_putchar('\n');
	ft_putchar('\t');
	ft_putstr("Original str1: ");
	ft_putendl(atoi);ft_putchar('\t');
	ft_putstr("Original str2: ");
	ft_putendl(atoi2);ft_putchar('\t');
	ft_putstr("Original str3: ");
	ft_putendl(atoi3);ft_putchar('\t');
	ft_putstr("Str1 to int conversion: ");
	ft_putnbr(ft_atoi(atoi));
	ft_putchar('\n');ft_putchar('\t');
	ft_putstr("Str2 to int conversion: ");
	ft_putnbr(ft_atoi(atoi2));
	ft_putchar('\n');ft_putchar('\t');
	ft_putstr("Str3 to int conversion: ");
	ft_putnbr(ft_atoi(atoi3));
	ft_putchar('\n');
	ft_putchar('\n');

	//ft_bzero Test
	ft_putendl("2: ft_bzero test:");
	ft_putchar('\n');
	ft_putchar('\t');
	ft_putstr("Original str bz: ");
	ft_putendl(s1);ft_putchar('\t');
	ft_bzero(bz, '#');
	ft_putstr("Output of ft_bzero: ");
	ft_putendl(bz);ft_putchar('\t');
	ft_putchar('\n');
	ft_putchar('\n');

	//ft_isalnum Test
	ft_putendl("3: ft_isalnum Test:");
	ft_putchar('\n');
	ft_putchar('\t');
	ft_putstr("Test1: ");
	ft_putendl("A");
	ft_putchar('\t');
	ft_putstr("Output: ");
	ft_putnbr(ft_isalnum('A'));
	ft_putchar('\n');
	ft_putchar('\t');
	ft_putstr("Test2: ");
	ft_putendl("9");
	ft_putchar('\t');
	ft_putstr("Output: ");
	ft_putnbr(ft_isalnum('9'));
	ft_putchar('\n');
	ft_putchar('\t');
	ft_putstr("Test3: ");
	ft_putendl("$");
	ft_putchar('\t');
	ft_putstr("Output: ");
	ft_putnbr(ft_isalnum('$'));
	ft_putchar('\n');

	//ft_strcmp Test
	ft_putendl("?: ft_strcmp Test:");
	ft_putchar('\n');
	ft_putchar('\t');
	ft_putstr("Output: ");
	ft_putnbr(ft_strcmp(atoi2, atoi3));
	ft_putchar('\n');
	ft_putchar('\t');
	ft_putstr("Output: ");
	ft_putnbr(ft_strcmp(atoi3, atoi2));
	ft_putchar('\n');











	ft_putendl("ft_strlcat test:");
	size_t r1 = ft_strlcat(s1, s2, max + 2);
//	size_t r2 = strlcat(s1, s2, max);
	
	

	ft_putstr(s1);
	ft_putchar('\n');
	ft_putnbr((int)r1);
	ft_putchar('\n');
//	printf("%zu\n", max);	
	
	/*ft_strsplit test
	char **arr = ft_strsplit(s1, ' ');
	ft_putstr("ft_strsplit test:");
	ft_putstr(s1);
	ft_putchar('\n');
	ft_putstr("Result of function:");
	ft_putchar('\n');
	ft_putstr(arr[0]);
	ft_putchar('\n');
	ft_putstr(arr[1]);
	ft_putchar('\n');
	ft_putstr(arr[2]);
	ft_putchar('\n');
	ft_putstr(arr[3]);
	ft_putchar('\n');*/
	return (0);
}
