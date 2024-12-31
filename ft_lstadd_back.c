/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 10:57:51 by ccastro           #+#    #+#             */
/*   Updated: 2024/08/26 11:22:39 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*curr;

	curr = ft_lstlast(*lst);
	if (curr == NULL)
		*lst = new;
	else
		curr->next = new;
}

// int main(void)
// {
// 	t_list *Node1 = ft_lstnew("Hello");
// 	t_list *Node2 = ft_lstnew("World");
// 	ft_lstadd_back(&Node1, Node2);
// 	t_list *temp = Node1;
// 	while (temp)
// 	{
// 		printf("%s\n", temp->content);
// 		temp = temp->next;
// 	}
// }