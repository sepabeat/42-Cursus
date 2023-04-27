//header

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char    *ft_strncpy(char    *dest, const char   *src, unsigned int  n)
{
    unsigned int    i;

    i = 0;

    while (i < n)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest); 
}

int ft_count_word(char    *s, char  c)
{
    unsigned int i;
    int recuento;
    int reset;

    i = 0;
    recuento = 0;
    reset = 0;
    while (s[i] != '\0')
    {
        if (s[i] != c && reset == 0 )
            {
               recuento++;
               reset = 1;
            }
        if (s[i] == c)
            reset = 0;
        i++;
    }
    return (recuento);
}

char    *ft_save_word(const char    *s, unsigned int    n)
{
    char         *str;

    str = (char *)malloc(sizeof(char) * (n + 1));
    if (str == NULL)
        return (NULL);
    str = ft_strncpy(str, s, n);
    str[n] = '\0';
    return (str);
}

char    **ft_split(char const   *s, char    c)
{
    char    **str;
    int         x;
    int         y;
    int         z;

    str = (char **)malloc(ft_count_word(s, c) * sizeof(char *) + 1); //POR QUÉ VOY A EJECUTAR MALLOC EN STR SI LUEGO LE VOY A DAR UN VALOR A STR Y VOY A SOBREESCRIBIR ESTE STR
    if (!str || !s)
        return (NULL);
    while (s[x])
    {
        while (s[x] == c)
            x++;
        y = x;
        while (s[x] && s[x] != c)
            x++;
        // ESTAS DOS LINEAS (68 y 71) NO TIENEN SENTIDO, ES LO MISMO AL REVÉS, SIEMPRE SE VA A CUMPLIR UNA Y VA A SER X++
        if (x > y)
        {
            str[z] = ft_save_word(s + y, x - y); // no comprendo este paréntesis
            z++;
        }
    }
    str[z] = NULL;
    return (str);
    free (str);
}

int main (void)
{
    char s1[] = "    hola  d  k ase  ";
    char del = ' ';
    printf("%d", ft_countw(s1, del));
    return (0);
}