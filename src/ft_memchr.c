/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorgalla <gorgalla@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:54:50 by gorgalla          #+#    #+#             */
/*   Updated: 2023/09/19 14:54:52 by gorgalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(void *b, int n, int size)
{
	int	i;

	i = 0;
	if (*(ft_memchr + i) != b)
	{
		while (n <= size)
			i++;
	}
	return (b);
}
