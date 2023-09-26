/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorgalla <gorgalla@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:54:50 by gorgalla          #+#    #+#             */
/*   Updated: 2023/09/26 10:12:16 by gorgalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(void *b, int n, int size)
{
	unsigned char *pointer;

	pointer = (unsigned char *)b;
	n = (unsigned char)n;
	while (size && *pointer != n)
	{
		pointer++;
		size--;
	}
	if (size)
		return ((char *)pointer);
	else
		return (NULL);
}
