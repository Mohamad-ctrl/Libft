/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosharif <mohamad42acc@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 14:19:08 by mosharif          #+#    #+#             */
/*   Updated: 2022/07/12 14:19:10 by mosharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	long	num;
	long	sinal;

	sinal = 1;
	num = 0;
	while ((*str <= 13 && *str >= 9) || *str == 32)
		str++;
	if (*str == '-')
		sinal *= -1;
	while (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		num = (num * 10) + (*str - '0');
		if (num < -2147483648)
			return (0);
		// else if (num > 2147483647)
		// 	return (-1);
		str++;
	}
	return (num * sinal);
}

// int main(void)
// {
// 	printf("%d\n", ft_atoi("-3890476589053766037405673408765083476908374"));
// 	printf("%d\n", atoi("-3890476589053766037405673408765083476908374"));
// 	return 0;
// }