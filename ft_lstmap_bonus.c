/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtopal <emtopal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 17:12:27 by emtopal           #+#    #+#             */
/*   Updated: 2024/11/03 02:47:37 by emtopal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	node(t_list **lst, t_list **new_lst, t_list *new_elm)
{
	t_list	*temp;

	temp = *new_lst;
	ft_lstadd_back(lst, new_elm);
	*new_lst = temp -> next;
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_elm;
	void	*new_cnt;

	new_lst = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst != NULL)
	{
		new_cnt = f(lst -> content);
		if (new_cnt == NULL)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		new_elm = ft_lstnew(new_cnt);
		if (new_elm == NULL)
		{
			free(new_cnt);
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		node(&new_lst, &lst, new_elm);
	}
	return (new_lst);
}
