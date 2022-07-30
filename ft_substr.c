/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosharif <mohamad42acc@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 19:36:04 by mosharif          #+#    #+#             */
/*   Updated: 2022/07/29 19:36:08 by mosharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *sub;
	size_t x;
	size_t i;
	if (s && start && len)
	{
	sub = (char*)malloc(sizeof(*s) * (len + 1));
	if (!sub)
		return (NULL);
	x = 0;
	i = 0;
	while (s[i])
	{
		if (i >= start && x < len)
		{
			sub[x] = s[i];
			i++;
		}
		x++;
	}
	sub[x] = '\0';
	return (sub);
}
return(NULL);
}