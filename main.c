/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sminnaar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 12:10:02 by sminnaar          #+#    #+#             */
/*   Updated: 2019/07/12 12:37:15 by sminnaar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"
#include <fcntl.h>

int	main(void)
{
	char	*s;
	char	*f;
	int		r;

	f = "This is a test";
	s = "This is a fest";
	r = ft_strnequ(s, f, 12);
	ft_putnbr(r);
	return (0);
}
	
	
	
	
	
/*{
	char *s;
	int fd;

	fd = open("New.txt", O_WRONLY);
	s = ft_getstr_fd(fd);
	write(fd, s, ft_strlen(s));
	ft_putendl(s);
	return (0);
}*/
