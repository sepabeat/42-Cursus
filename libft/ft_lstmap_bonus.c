/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salperez <salperez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:49:53 by salperez          #+#    #+#             */
/*   Updated: 2023/05/02 18:12:57 by salperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list	*lst, void	*(*f)(void	*), void	(*del)(void	*))
{
	t_list	*aux;
	t_list	*start;

	if (!lst || !del || !f)
		return (NULL);
	aux = ft_lstnew(f(lst->content));
	if (!aux)
		return (free(aux), NULL);
	start = aux;
	lst = lst->next;
	while (lst)
	{
		aux->next = ft_lstnew(f(lst->content));
		if (!aux->next)
		{
			ft_lstclear(&start, del);
			return (0);
		}
		aux = aux->next;
		lst = lst->next;
	}
	return (start);
}
