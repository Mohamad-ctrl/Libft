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

// char	ft_tolower_test(void)
// {
// 	if (ft_tolower(97) == 1)
// 	{
// 		printf("Passed\n");
// 	}
// 	else
// 		printf("Faild\n");
// 	return (0);
// }
// char	ft_toupper_test(void)
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
// 	return (0);
// }
// int main(int argc, char **argv)
// {
// 	int array[3][4] = {{1, 2, 3, 4, 5}, {10, 20, 30, 40, 50}, {100, 200, 300,
		// 400, 500}, {1000, 2000, 3000, 4000, 5000}};
// 	printf("%d\n", &array[0][2]);
// }

// int game(int gu)
// {
// 	int secnum = 100;
// 	if(gu != secnum)
// 	{
// 		printf("Wrong guess bud\n");
// 		return (0);
// 	}
// 	if (gu == secnum)
// 	{
// 		printf("Congrats you won a car :D\n");
// 		return (0);
// 	}
// 	else
// 		printf("Error\n");
// 	return (0);
// }

// int main(int argc, char **argv)
// {
// 	if (argc == 2)
// 	{
// 		game(ft_atoi(argv[1]));
// 	}
// 	return (0);
// }

// atoi

// int main(int ac, char **av)
// {
// 	printf("My Atoi :%d:", ft_atoi(av[1]));
// 	printf("\n");
// 	printf("Real Atoi :%d:", atoi(av[1]));
// 	return 0;
// }

// int game(int gu)
// {
// 	int secnum = 20;

// 	if (secnum == gu)
// 	{
// 		printf("correct guess\n");
// 		return(0);
// 	}
// 	else if (secnum != gu)
// 	{
// 		printf("Wrong guess\n");
// 		return(0);
// 	}
// 	else
// 		printf("Error\n");
// 	return (0);
// }

// memcpy

// int main(int argc, char **argv)
// {
// 	char *final;
// 	char src[50] = "hey how are you!?";
// 	char dis[60];
//  	final = ft_memcpy(dis, src, ft_strlen(src));
// 	printf("%s\n", final);
// 	printf("\n");
// }

// memcmp

// int main()
// {
// 	int first[] = {1, 2};
// 	int sec[] = {2, 2};

// 	if (ft_memcmp(first, sec, sizeof(int)) == 0)
// 		printf("passed\n");
// 	else
// 		printf("idk what to tell ya\n");
// 	return (0);
// }

// strdup

// int	main(int argc, cha+r **argv)
// {
// 	char	*mine;
// 	char	*theirs;

// 	mine = NULL;
// 	theirs = NULL;
// 	mine = ft_strdup(argv[1]);
// 	theirs = strdup(argv[1]);
// 	printf(":%s:\n:%s:", mine, theirs);
// 	return (0);
// }

// strchr

// int main()
// {
// 	char so[50] = "Hey how are you doing !";
// 	char *res = ft_strchr(so, '!');

// 	printf("%s\n", res);
// 	return 0;
// }


// memset


// int main(void)
// {
// 	// char array[10] = "aaaaaaaaaa";
// 	char array[10]; // We can fill an emty memory or we can replace it memory
// 	// ft_memset(array, 'c', ft_strlen(array));
// 	 ft_memset(array, 'c', sizeof(char) * 10); // If you go above the max size it will fill the whole memory with no errors

// 	for (int i = 0; i < 10; ++i)
// 		printf("[%c]", array[i]);
// 	printf("\n");
// 	return 0;
// }


// memmove

int main()
{
	char sr[200] = "stop here 2222";
	char *res;
	char *res1;

 	res = ft_memcpy(sr + 4, sr + 8, 8);
 	res1 = ft_memmove(sr + 4, sr + 8, 8);
 	// int i = 0;
 	// while (*res)
 	// {
 	// 	printf("%p %d\n", res, i++);
 	// 	res++;
 	// }
 	// i = 0;
 	// while (*res1)
 	// {
 	// 	printf("%p %d\n", res1, i++);
 	// 	res1++;
 	// }
	// res = memmove(sr + 10, sr + 6, 4);
	// while (*res)
 // 	{
 // 		printf("%p\n", &res1);
 // 		res++;
 // 	}
	printf("%s \n", res);
	printf("%s \n", res1);
	// if (ft_strncmp(res, res, ft_strlen(res)))
	// 	printf("hello\n");
	return (0);
}

// int	main()
// {
// 	char	*src = "this is a good nyancat !\r\n";
// 	char	dst1[0xF0];
// 	char	dst2[0xF0];
// 	int		size = strlen(src);

// 	memmove(dst1, src, size);
// 	ft_memmove(dst2, src, size);

// 	// printf("%s\n", dst1);
// 	// printf("%s\n", dst1);

// 	int a;
// 	if ((memcmp(dst1, dst2, size)))
// 	{
// 		printf("success\n");
// 	}
// }


// strnstr

// int main(void)
// {
// 	char st[50] = "hey how you doing baby!";
// 	char lok[10] = "h";
// 	char *res;
// 	res = ft_strnstr(st, lok, 23);
// 	printf("%s\n", res);
// 	return 0;
// }
