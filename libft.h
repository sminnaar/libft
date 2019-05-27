/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sminnaar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 15:20:31 by sminnaar          #+#    #+#             */
/*   Updated: 2019/05/27 09:23:03 by sminnaar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}							t_list;

int				ft_atoi(char *str);
int				ft_isalnum(int c);
int				ft_isalpha(int a);
int				ft_isascii(int a);
int				ft_isdigit(int d);
int				ft_islower(int c);
int				ft_isprint(int p);
int				ft_isupper(int c);
void			*ft_memset(void *b, int c, unsigned long len);
void			ft_putchar(char c);
void			ft_putnbr(int nbr);
void			ft_putstr(const char *s);
void			ft_strclr(char *s);
int				ft_strcmp(const char *s1, const char *s2);
char			*ft_strcpy(char *dst, const char *src);
char			*ft_strdup(const char *s1);
int				ft_strequ(char const *s1, char const *s2);
void			ft_striter(char *s, void (*f)(char *));
unsigned long	ft_strlen(const char *s);
int				ft_strncmp(const char *s1, const char *s2, unsigned long n);
char			*ft_strncpy(char * dst, const char * src, unsigned long len);
int				ft_strnequ(char const *s1, char const *s2, unsigned long n);
int				ft_tolower(int c);
int				ft_toupper(int c);

#endif
