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
	int	sinal;
	int	num;

	sinal = 1;
	num = 0;
	while ((*str <= 13 && *str >= 9) || *str == 32)
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sinal *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		// if (sinal == -1 && (num) * sinal <= LLONG_MIN / 10)
		// 	return (0);
		// if (num >= LLONG_MAX / 10)
		// 	return (-1);
		num = (num * 10) + (*str - '0');
		str++;
	}
	return (num * sinal);
}
