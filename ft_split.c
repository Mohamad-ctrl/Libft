/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosharif <mohamad42acc@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 13:29:28 by mosharif          #+#    #+#             */
/*   Updated: 2022/07/30 13:29:29 by mosharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char dosplit(char const *str, char sp)
{
	int x;
	int y;
	int i;
	int z;
	char *array2;
	char *array1;
	char *res;

	x = 0;
	y = 0;
	i = 0;
	z = 0;
	while (str[i])
	{
		if (str[i] == sp)
			array2[y] = str[i];
		else
			array1[x] = str[i];
	}
	res = (char)malloc(sizeof(char) * (ft_strlen(array1) + ft_strlen(array2)) + 1);
	if (!res)
		return (NULL);
	while (array1[x])
		res[z++] = array1[x++];
	while (array2[y])
		res[z++] = array2[y++];
	res[z] = '\0';
	return (res);
}

char **ft_split(char const *s, char c)
{
	int x;
	int y;
	char *sendto;

	x = 0;
	y = 0;
	sendto = (char)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!sendto)
		return (NULL);
	sendto = dosplit(s, c);
	return (sendto);
}

