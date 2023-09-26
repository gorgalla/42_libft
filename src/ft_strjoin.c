/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorgalla <gorgalla@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 13:38:29 by gorgalla          #+#    #+#             */
/*   Updated: 2023/09/26 08:04:12 by gorgalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	int		a;
	int		b;

	if (!s1 || !s2)
		return (ft_strdup(""));
	if (s1 && !s2)
		return (ft_strdup(s1));
	if (!s1 && s2)
		return (ft_strdup(s2));
	a = ft_strlen(s1);
	b = ft_strlen(s2);
	dst = (char *)malloc(sizeof(char) * (a + b + 1));
	if (!dst)
		return (NULL);
	ft_strlcat(dst, s1, a + b + 1);
	return (dst);
}
