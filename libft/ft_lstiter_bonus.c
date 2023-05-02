/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salperez <salperez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:06:52 by salperez          #+#    #+#             */
/*   Updated: 2023/05/02 16:39:32 by salperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list	*lst, void (*f)(void	*))
{
	while (lst)
	{
		f(lst->content);
		lst = (lst)->next;
	}
}

//La usamos para repetir una función sobre todos los elementos de una lista,
// está genial para reproducir un virus