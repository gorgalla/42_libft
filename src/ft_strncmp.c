/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorgalla <gorgalla@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:12:31 by gorgalla          #+#    #+#             */
/*   Updated: 2023/09/19 15:14:21 by gorgalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(char *str1, char *str2, size_t n)
{
	size_t	size1;
	size_t	size2;
	size_t	i;
	size_t	j;

	size1 = 0;
	size2 = 0;
	i = 0;
	j = 0;
	while (i < n && str1[i] != '\0' && str2[j] != '\0')
	{
		size1++;
		size2++;
		i++;
		j++;
	}
	if (size1 == size2)
		return (0);
	else if (size1 < size2)
		return (-1);
	else
		return (1);
}
