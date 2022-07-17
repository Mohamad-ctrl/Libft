/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosharif <mohamad42acc@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:41:19 by mosharif          #+#    #+#             */
/*   Updated: 2022/07/12 10:41:22 by mosharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strlen(char	*str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
		x++;
	return (x);
}

// int main()
// {
// 	printf("%d\n", ft_strlen("Hello"));
// 	return 0;
// }