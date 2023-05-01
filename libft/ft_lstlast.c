/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salperez <salperez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 19:09:36 by salperez          #+#    #+#             */
/*   Updated: 2023/05/01 19:20:53 by salperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list	*lst)
{
	t_list	*aux;

	if (!lst)
		return (0);
	aux = lst -> next;
	while (aux)
	{
		lst = aux;
		aux = lst -> next;
	}
	return (lst);
}
