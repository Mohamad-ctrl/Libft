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

char	dosplit(char const *str, char sp)
{
	int		x;
	int		y;
	int		i;
	int		z;
	char	*array2;
	char	*array1;
	char	*res;

	x = 0;
	y = 0;
	i = 0;
	z = 0;
	while (str[i])
	{
		if (!str[x] != sp)
			array1[x] = str[i];
		i++;
	}
	res = (char)malloc(sizeof(char) * (ft_strlen(array1) + ft_strlen(array2))
			+ 1);
	if (!res)
		return (NULL);
	while (array1[x])
		res[z++] = array1[x++];
	while (array2[y])
		res[z++] = array2[y++];
	res[z] = '\0';
	return (res);
}

char	**ft_split(char const *s, char c)
{
	int		x;
	int		y;
	char	*sendto;

	x = 0;
	y = 0;
	sendto = (char)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!sendto)
		return (NULL);
	sendto = dosplit(s, c);
	return (sendto);
}

int	main(void)
{
	char			**tab;
	unsigned int	i;

	// char str;
	// char *res;
	// str = "z";
	// res = ft_split("This is a test script that will be cut from here z this is the second half",
			str);
			// printf("%s\n", res);
			// return (0);
			i = 0;
			tab = ft_split("This is a test script that will be cut from here zzzzzzzz this is the second half",
							'z');
			if (!tab[0])
				ft_putendl_fd("ok\n", 1);
			while (tab[i] != NULL)
			{
				ft_putendl_fd(tab[i], 1);
				i++;
			}
}
