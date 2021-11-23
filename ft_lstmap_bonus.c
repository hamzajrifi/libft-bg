/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjrifi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 15:33:45 by hjrifi            #+#    #+#             */
/*   Updated: 2021/11/22 15:37:19 by hjrifi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*noud;

	if (!f || !lst)
		return (0);
	tmp = NULL;
	while (lst)
	{
		noud = ft_lstnew((*f)(lst->content));
		if (!noud)
		{
			while (tmp)
			{
				noud = tmp->next;
				(*del)(tmp->content);
				free(tmp);
				tmp = noud;
			}
			lst = NULL;
			return (NULL);
		}
		ft_lstadd_back(&tmp, noud);
		lst = lst->next;
	}
	return (tmp);
}
