/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salperez <salperez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 12:40:49 by salperez          #+#    #+#             */
/*   Updated: 2023/04/28 11:31:27 by salperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	int	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (0);
	ft_bzero(ptr, count * size);
	return (ptr);
}

// int	main(void)
// {
// 	int unidades = 1;
// 	int size = 2;
// 	printf("%d", calloc(unidades, size));
// 	// printf("%d", ft_calloc(unidades, size));
// 	return (0);
// }

/*Esta función aloja de forma contigua espacio para n objetos, cada uno de size 
bytes de memoria y devuelve un puntero a la memoria alojada, esta memoria se
llena con bytes de valor 0
Una forma más segura (pero más lenta) que malloc para reservar memoria para 
ya que se asegura de dejar esa memoria "vacía", con valor 0*/