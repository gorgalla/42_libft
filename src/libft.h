/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorgalla <gorgalla@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:49:30 by gorgalla          #+#    #+#             */
/*   Updated: 2023/09/20 15:21:04 by gorgalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *str);
void	*ft_memset(void *dest, int c, unsigned int n);
void	ft_bzero(void *dest, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
int		ft_atoi(const char *str);
void	*ft_calloc(size_t x, size_t size);
char	*ft_itoa(int n);
void	*ft_memchr(void *b, int n, int size);
int		ft_memcmp(const void *dst, const void *str, size_t n);
void	*ft_memmove(void *str1, const void *str2, size_t n);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
char	*ft_strdup(const char *s1);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcat(char *dest, const char *src, size_t sz);

#endif
