/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorgalla <gorgalla@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 13:37:32 by gorgalla          #+#    #+#             */
/*   Updated: 2023/09/26 07:54:51 by gorgalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char *str, unsigned int start, size_t len)
{
	char	*string;
	size_t	size;

	if (!str)
		return (NULL);
	if (start >= ft_strlen(str))
		return (ft_strdup(""));
	size = ft_strlen(str + start);
	if (size < len)
		len = size;
	string = (char *)malloc(sizeof(char) * (len + 1));
	if (!string)
		return (NULL);
	ft_strlcat(string, str + start, len + 1);
	return (string);
}
