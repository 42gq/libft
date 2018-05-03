/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swapnext.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquerre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/07 17:11:57 by gquerre           #+#    #+#             */
/*   Updated: 2017/01/07 17:40:20 by gquerre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_swapnext(char *str, char c)
{
	int i;
	int k;

	i = 0;
	k = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			while (str[i + k] == c)
				k++;
			if (str[i + k] == '\0')
			{
				ft_putstr("blocked\n");
				break ;
			}
			str[i] = str[i + k];
			str[i + k] = c;
		}
		i = i + k + 1;
		k = 0;
	}
	return (str);
}
