/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salperez <salperez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 18:08:49 by salperez          #+#    #+#             */
/*   Updated: 2023/04/28 18:16:06 by salperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*Igual que ft_putchar, pero el write que va a llamar, en lugar de (1, &c, 1),
que solemos usar, a write le vamos a pasar como primer parámetro el valor de fd
el 1 que usamos normalmente es para standar output, con fd no especificamos que 
sea necesariamente ese output sino que puede variar segun el valor que le entre
a la función*/