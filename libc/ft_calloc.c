//header

#include <stdio.h>
#include <stdlib.h>

void    *ft_calloc(size_t   count, size_t   size)
{
    int *ptr;

    ptr = (int *) malloc(size);
    if (ptr == NULL)
        return (NULL);
    free (ptr);
    return (ptr);
}

int main (void)
{
    int unidades = 1;
    int size = 2;
    // printf("%d", calloc(unidades, size));
    printf("%d", ft_calloc(unidades, size));
    return (0);
}