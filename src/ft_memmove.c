/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorgalla <gorgalla@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:10:35 by gorgalla          #+#    #+#             */
/*   Updated: 2023/09/20 15:17:16 by gorgalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;

	if (s1 < s2)
		return (ft_memcpy(str1, str2, n));
	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	if (!n || str1 == str2)
		return (str1);
	while (n--)
		s1[n] = s2[n];
	return (str1);
}
