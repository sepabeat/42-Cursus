/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salperez <salperez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:06:52 by salperez          #+#    #+#             */
/*   Updated: 2023/05/05 14:01:48 by salperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list	*lst, void (*f)(void	*))
{
	if (lst && f)
	{
		while (lst->next != 0)
		{
			f(lst->content);
			lst = lst->next;
		}
		f(lst->content);
	}
}

//La usamos para repetir una función sobre todos los elementos de una lista,
// está genial para reproducir un virus