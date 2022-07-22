#include "libft.h"

int memcmp(const void *s1, const void *s2, size_t n)
{
    size_t x;

    x = 0;
    while(((char *)s1)[x] == ((char *)s2)[x] && ((char *)s2)[x] != NULL && ((char *)s1)[x] != NULL)
        i++;
    return (((char *)s1)[x] - ((char *)s2)[x]);
}