//header 42

#include <stdio.h>
#include <stdlib.h>

int ft_atoi(const char *str)
{
    int i;
    int result;
    int sign;

    i = 0;
    result = 0;
    sign = 1;
    while (str[i] == ' ')
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
       i++; 
    }
    while (str[i] >= '0' && str[i] <= '9' && str[i])
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return (result * sign); 
}

// int main (void)
// {
//     const char  str[] = " -68"; 
//     printf("%d \n", atoi(str));
//     printf("%d", ft_atoi(str));
//     return (0);
// }