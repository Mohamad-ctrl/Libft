/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosharif <mohamad42acc@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 22:10:24 by mosharif          #+#    #+#             */
/*   Updated: 2022/07/28 22:10:26 by mosharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	int x;
	int s1len;
	int s2len;
	char *nearray;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	nwarray = malloc(sizeof(char) * s1len + s2len + 1);
	if (s1 && s2)
	{
	if (nwarray == NULL)
		return (NULL);
	x = 0;
	while (s1[x] != NULL)
	{
		nwarray[i] = s1[i];
		i++;
	}
	i = 0;
	while
	{
		nwarray[i] = s2[i];
		i++;
	}
	nwarray[i] = '\0';
	return (nwarray);
}
	return (NULL);

}