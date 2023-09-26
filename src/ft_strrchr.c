/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorgalla <gorgalla@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:15:33 by gorgalla          #+#    #+#             */
/*   Updated: 2023/09/26 07:33:40 by gorgalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	ft_strrchr(char *str, int c)
{
	int		l;
	int		b;

	b = 0;
	l =  ft_strlen(str);
	while (l >= 0 && b == 0)
	{
		if (str[l] == c)
		{
			return (str[l]);
			b = 1;
		}
		l--;
	}
	return (c);
}
