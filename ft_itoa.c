/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosharif <mohamad42acc@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 17:02:25 by mosharif          #+#    #+#             */
/*   Updated: 2022/07/30 17:02:29 by mosharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	lencount(long x)
{
	size_t	i;

	if (x == 0)
		return (1);
	i = 0;
	if (x < 0)
		i++;
	while (x)
	{
		x /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
    long nb;
    long len;
    char *res;
    
	nb = n;
	len = lencount(nb);
	res = (char *)malloc(sizeof(char) * len + 1);
	if (!res)
		return (NULL);
	if (nb == 0)
		res[0] = '0';
	if (nb < 0)
	{
		res[0] = '-';
		nb *= -1;
	}
	res[len] = '\0';
	while (len--)
	{
		if (nb > 0)
		{
			res[len] = '0' + nb % 10;
			nb = nb / 10;
		}
	}
	return (res);
}

// int	main(int argc, char const *argv[])
// {
// 	printf("%s\n", ft_itoa(-623));
// 	printf("%s\n", ft_itoa(INT_MIN));
// 	printf("%s\n", ft_itoa(-0));
// 	return (0);
// }
