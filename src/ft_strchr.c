/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorgalla <gorgalla@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:10:38 by gorgalla          #+#    #+#             */
/*   Updated: 2023/09/19 15:11:18 by gorgalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_strchr(char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] == c)
		i++;
	return (c);
}
