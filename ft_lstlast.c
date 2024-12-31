/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 10:38:06 by ccastro           #+#    #+#             */
/*   Updated: 2024/08/26 13:11:07 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst && lst->next != NULL)
		lst = lst->next;
	return (lst);
}

// int	main(void)
// {
// 	t_list *Node1 = ft_lstnew("Node1");
// 	t_list *Node2 = ft_lstnew("Node2");
// 	t_list *Node3 = ft_lstnew("Node3");
// 	ft_lstadd_back(&Node1, Node2);
// 	ft_lstadd_back(&Node2, Node3);
// 	t_list *temp = ft_lstlast(Node1);
// 	printf("%s\n", temp->content);
// }