/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorgalla <gorgalla@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:59:45 by gorgalla          #+#    #+#             */
/*   Updated: 2023/09/20 14:40:28 by gorgalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

size_t	ft_strlen(const char *str);

size_t	ft_strlcpy(char *dst, char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	len = ft_strlen(src);
	if (dstsize == 0)
		return (0);
	if (src != NULL)
	{
		if (len >= dstsize)
			len = dstsize;
		while ((i < len) && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
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
