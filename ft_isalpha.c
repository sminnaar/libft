/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sminnaar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 13:59:05 by sminnaar          #+#    #+#             */
/*   Updated: 2019/05/19 14:38:21 by sminnaar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isalpha(int a)
{
		if ((a <= 'a' && a >= 'z' || a <= 'A' && a >= 'Z'))
			return (1);
		else
			return (0);
}
