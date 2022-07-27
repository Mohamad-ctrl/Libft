/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosharif <mohamad42acc@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 10:46:05 by mosharif          #+#    #+#             */
/*   Updated: 2022/07/13 10:46:23 by mosharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int x;

	x = 0;
	if (!s)
		return (NULL);
	while (x < c)
	{
		// if (res[x] == '\0')
		// 	return (NULL);
		if (((char *)s)[x] == (char)c)
		{
			return (&((char *)s)[x]);
		}
		x++;
	}
	return (NULL);
}
