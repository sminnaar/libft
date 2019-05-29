/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sminnaar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 12:33:43 by sminnaar          #+#    #+#             */
/*   Updated: 2019/05/27 15:11:24 by sminnaar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main()
{
	char *s1 = "Werk Hiersie program rerig?";

	char **arr = ft_strsplit(s1, ' ');
	ft_putstr(arr[0]);
	ft_putstr(arr[1]);
	ft_putstr(arr[2]);
	ft_putstr(arr[3]);
	return (0);
}
