/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosharif <mohamad42acc@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 10:43:18 by mosharif          #+#    #+#             */
/*   Updated: 2022/07/13 10:43:31 by mosharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

int		ft_strlen(char *str);
int		ft_tolower(int c);
int		isprint(int c);
int		ft_toupper(int c);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
int		ft_atoi(const char *str);
int		ft_isalpha(int n);
int		ft_isalnum(int n);
int		ft_isascii(int n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strdup(char *str);
char 	*ft_strchr(const char *s, int c);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n);
void 	*ft_memmove(void *dest, const void *src, size_t n);

#endif
