/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosharif <mohamad42acc@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 19:59:45 by mosharif          #+#    #+#             */
/*   Updated: 2022/07/29 19:59:47 by mosharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

// char checkset(char *str, char *set)
// {
//     int x;
//     int y;

//     x = 0;
//     y = 0;
//     while (str[x] != NULL && set[y] != NULL)
//     {
//         if (str[x] == set[y])
//             return ("match");
//         else
//             return (0);
//         x++;
//         y++;
//     }
//     return (1);
// }

// char *ft_strtrim(char const *s1, char const *set)
// {
//     char res;
//     int last;
//     int x;
//     int y;

//     x = 0;
//     y = 0;
//     next = 1;
//     res = malloc(sizeof(char) * ft_strlen(s1));
//     if (!res)
//         return (NULL);
//     while (s1[x] != NULL && set[y])
//     {
//         if (checkset(s1[x], set[y]) == "match")
//         {
//             while (checkset(s1[x + next], set[y]) == "match")
//                 next++;
//         }

//         x++;
//         y++;
//     }
// }

char checkset(char c, char *set)
{
    int x;

    x = 0;
    while (set[x] != NULL)
    {
        if (set[x] == c)
            return (1);
        x++;
    }
    return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
    char res;
    int x;
    int front;
    int back;

    front = 0;
    if (!res)
        return (NULL);
    while (s1[front] && checkset(s1[front], set))
        front++;
    while (s1[back] && checkset(s1[back], set))
        back--;
    res = (char *)malloc(sizeof(char) * (front - back + 1));
    x = 0;
    if (!res)
        return (NULL);
    while (front < back)
    {
        res[x] = s1[front];
        x++;
        front++;
    }
    res[x] = '\0';
    return (res);   
}
