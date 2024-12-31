/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 12:52:00 by ccastro           #+#    #+#             */
/*   Updated: 2024/08/26 14:40:09 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;

	if (*lst == NULL)
		return ;
	while (*lst)
	{
		next = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = next;
	}
	*lst = NULL;
}

// void	delete(void *content)
// {
// 	free(content);
// }

// int	main(void)
// {
// 	t_list *Node1 = ft_lstnew(ft_strdup("Node1"));
// 	t_list *Node2 = ft_lstnew(ft_strdup("Node2"));
// 	t_list *Node3 = ft_lstnew(ft_strdup("Node3"));
// 	t_list *Node4 = ft_lstnew(ft_strdup("Node4"));
// 	ft_lstadd_back(&Node1, Node2);
// 	ft_lstadd_back(&Node2, Node3);
// 	ft_lstadd_back(&Node3, Node4);
// 	t_list *temp = Node1;
// 	while (temp)
// 	{
// 		printf("%s\n", (char *)temp->content);
// 		temp = temp->next;
// 	}
// 	ft_lstclear(&Node1, delete);
// 	while (temp)
// 	{
// 		printf("%s\n", (char *)temp->content);
// 		temp = temp->next;
// 	}
// }
