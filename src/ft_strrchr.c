/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorgalla <gorgalla@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:15:33 by gorgalla          #+#    #+#             */
/*   Updated: 2023/09/19 15:15:35 by gorgalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_strrchr(char *str, int c)
{
	int	i;
	int	strlen;

	strlen = str;
	i = strlen - 1;
	while (str[i] == c)
		i--;
	return (c);
}
