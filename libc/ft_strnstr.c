/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salperez <salperez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 16:59:37 by salperez          #+#    #+#             */
/*   Updated: 2023/04/20 13:22:56 by salperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//NO ME FUNCIONA, ME DEVUELVE SIEMPRE NULL
#include <string.h>
#include <stdio.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    unsigned char *str;
    unsigned char *tofind;

    int x;
    int i;
    int j;
    
    str = (unsigned char *) haystack;
    tofind = (unsigned char *) needle;
    x = 0;
    i = 0;
    if(tofind[i] == '\0')
        return((char *)&haystack[i]);
    while(x < len)
    {
        while(str[i] != '\0')
        {
            j = 0;
            while(str[i] == tofind[j] && tofind[j] != '\0')
            {
                if(tofind[j] == '\0')
                {
                    return((char *)&haystack[i]);
                }
                j++;
            }
            i++;
        }
        x++;
    }
    return(NULL);
}

int main (void)
{
    char *str = "hola babuino";
    char *tofind = "hola";
    size_t len = 5;
    
    printf("%s", ft_strnstr(str, tofind, len));
	return (0);
}