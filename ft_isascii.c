/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sminnaar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 14:06:48 by sminnaar          #+#    #+#             */
/*   Updated: 2019/05/20 16:36:48 by sminnaar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		isascii(int a)
{
	if (a >= 0 && a <= 127)
		return (1);
	else
		return (0);
}
