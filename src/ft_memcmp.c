/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorgalla <gorgalla@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 13:20:35 by gorgalla          #+#    #+#             */
/*   Updated: 2023/09/27 16:36:54 by gorgalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(void *dest, const void *src, size_t n)
{
	unsigned char	*str2;
	unsigned char	*dst2;

	dst2 = (unsigned char *)dest;
	str2 = (unsigned char *)src;
	if (n)
	{
		while (n--)
		{
			if (*dst2++ != *str2++)
				return (*(--dst2) - *(--str2));
		}
	}
	return (0);
}
