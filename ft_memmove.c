/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosharif <mohamad42acc@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 21:09:26 by mosharif          #+#    #+#             */
/*   Updated: 2022/07/23 21:09:30 by mosharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t x;
	char *d;
	char temp[256];

	d = dest;
	x = 0;
	while (x < n)
	{
		 temp[x] = ((char *)src)[x];
		 d[x] = temp[x];
		 x++;
	}
	return (d);
}

