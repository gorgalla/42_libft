/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorgalla <gorgalla@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:59:45 by gorgalla          #+#    #+#             */
/*   Updated: 2023/09/27 16:38:07 by gorgalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

size_t	ft_strlen(const char *str);

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	len = ft_strlen(src);
	if (size == 0)
		return (0);
	if (src != NULL)
	{
		if (len >= size)
			len = size;
		while ((i < len) && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (len);
}
/*
int	main(void)
{
	char	dst[10];
	char	src[];

	src = "Hola, mundo!"
		size_t len = ft_strlcpy(dst, src, sizeof(dst));
	printf("dst = %s\n", dst);
	printf("len = %zu\n", len);
	return (0);
}*/
