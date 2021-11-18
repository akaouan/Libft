/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaouan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 00:06:21 by akaouan           #+#    #+#             */
/*   Updated: 2021/11/17 00:08:50 by akaouan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f) (void *), void (*del) (void *))
{
	t_list	*new_lst;
	t_list	*new_elem;

	new_lst = NULL;
	while (lst != NULL)
	{
		new_elem = ft_lstnew(f(lst->content));
		if (new_elem == NULL)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_elem);
		lst = lst->next;
	}
	return (new_lst);
}
/*
int main()
{
    t_list *new;
    t_list *new_shit;

    new = ft_lstnew(NULL);
    new -> next = ft_lstnew(NULL);
    new -> next -> next = ft_lstnew(NULL);
    new_shit = ft_lstmap(new, apply, del);
    while (new_shit != NULL)
    {
        printf("%s\n", new_shit -> content);
        new_shit = new_shit -> next;
    }
}*/
