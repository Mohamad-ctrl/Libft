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
#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#ifndef LIBFT_H_
#define LIBFT_H_

int	ft_strlen(char	*str);
int	ft_tolower (int c);
int	isprint(int c);
int	ft_toupper(int c);
int	ft_strncmp(char *s1, char *s2, unsigned int n);
int	ft_atoi(const char *str);
int	ft_isalpha(int n);
int	ft_isalnum(int n);
int	ft_isascii(int n);
void ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);

#endif
