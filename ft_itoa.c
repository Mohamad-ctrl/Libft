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

int lencount(int x)
{
    size_t i;

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
    return(i);
}

char *ft_itoa(int n)
{
    int len;
    int i;
    char *res;

    len = lencount(n);
    res = (char *)malloc(len + 1);
    i = 0;
    if (!res)
        return (NULL);
    while (res[i] < len + 1)
        i++;
    res[i] = '\0';
    if (n < 0)
    {
        res[0] = '-';
        i = 1;
    }
    else
        i = 0;
    while (len > 1)
    {
        if (n < 0)
        {
            res[len] = '0' + n % 10;
            n = n/ 10;
        }
        else
        {
            res[len] = '0' + n % 10;
            n = n / 10;
        }
        len--;
    }
        return (res);
}

// int main(int argc, char const *argv[])
// {
//     ft_itoa(42);

//     return 0;
// }

