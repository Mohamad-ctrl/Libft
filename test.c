/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosharif <mohamad42acc@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 09:51:58 by mosharif          #+#    #+#             */
/*   Updated: 2022/07/13 09:51:59 by mosharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

// char	ft_tolower_test()
// {
// 	if (ft_tolower(97) == 1)
// 	{
// 		printf("Passed\n");
// 	}
// 	else
// 		printf("Faild\n");
// 	return (0);
// }
// char	ft_toupper_test()
// {
// 	if (ft_toupper(65) == 1)
// 	{
// 		printf("Passed\n");
// 	}
// 	else
// 		printf("Faild\n");
// 	return (0);
// }

// int main(int argc, char **argv)
// {
// 	printf("\n");
// 	printf("ft_tolower test\n");
// 	ft_tolower_test();
// 	printf("\n");
// 	printf("ft_toupper test\n");
// 	ft_toupper_test();
// 	return 0;
// }
int main(int argc, char **argv)
{
	int array[3][4] = {{1, 2, 3, 4, 5}, {10, 20, 30, 40, 50}, {100, 200, 300, 400, 500}, {1000, 2000, 3000, 4000, 5000}};
	printf("%d\n", &array[0][2]);
}