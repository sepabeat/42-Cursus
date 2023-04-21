//header

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

void	*ft_memcpy(void	*dst, const void	*src, size_t	n)
{
	size_t			i;
	unsigned char	*dstu;
	unsigned char	*srcu;

	i = 0;
	dstu = (unsigned char *)dst;
	srcu = (unsigned char *)src;
	while (i < n)
	{
		dstu[i] = srcu[i];
		i++;
	}
	return (dst);
}

char    *ft_strdup(const char  *s1)
{
    size_t  len;
    char    *dest;

    len = ft_strlen(s1);
    dest = malloc(len + 1);
    if (dest == NULL)
        return (NULL);
    ft_memcpy(dest, s1, len);
    dest[len] = '\0';
    free (dest);
    return (dest);
}

int main(void)
{
    char src[] = "hola";
    // printf("%s", strdup(src));
    printf("%s", ft_strdup(src));
    return (0);
}