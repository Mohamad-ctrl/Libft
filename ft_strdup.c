/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosharif <mohamad42acc@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 14:40:35 by mosharif          #+#    #+#             */
/*   Updated: 2022/07/19 14:40:43 by mosharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int len(char *str)
{
	int x = 0;

	while(*str++)
		x++;
	return (x);
}

char	*ft_strdup(char	*str)
{
	int i = 0;
	char *new;

	if (!(new = (char*)malloc(sizeof(char) * len(str) + 1)))
		return NULL;
	while (*str)
		new[i++] = *str++;
	new[i] = '\0';
	return (new);
}
z
int main(int argc, char **argv)
{
	char *src = "Hello";
	char *mine = NULL;
	char *theirs = NULL;

	mine = ft_strdup(argv[1]);
	theirs = strdup(argv[1]);
	printf(":%s:\n:%s:", mine, theirs);
	return (0);
}
