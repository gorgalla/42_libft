/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorgalla <gorgalla@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:10:38 by gorgalla          #+#    #+#             */
/*   Updated: 2023/10/14 15:26:31 by gorgalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;
	int	flag;

	flag = 0;
	i = 0;
	if (str[i] == '\0')
		return ((char *)&str[i]);
	while (((char *)str)[i] != '\0' && flag == 0)
	{
		if (((char *)str)[i] == c)
		{
			return ((char *)&str[i]);
			flag = 1;
		}
		i++;
	}
	if (c == '\0')
		return ((char *)&str[i]);
	return (NULL);
}
