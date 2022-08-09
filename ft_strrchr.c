/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosharif <mohamad42acc@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 13:07:43 by mosharif          #+#    #+#             */
/*   Updated: 2022/07/25 13:07:44 by mosharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	x;

	x = ft_strlen((char *)s);
	while (*s && (unsigned char)c != *s)
		s++;
	while (x >= 0)
	{
		if (((char *)s)[x] == (unsigned char)c)
			return ((char *)(s + x));
		x--;
	}
	return (NULL);
}
