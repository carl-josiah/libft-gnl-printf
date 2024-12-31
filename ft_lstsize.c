/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 22:00:51 by ccastro           #+#    #+#             */
/*   Updated: 2024/08/26 11:39:26 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*node;

	i = 0;
	node = lst;
	while (node != NULL)
	{
		i++;
		node = node->next;
	}
	return (i);
}

// int	main(void)
// {
// 	t_list	*Node1 = ft_lstnew("Hello");
// 	t_list	*Node2 = ft_lstnew("Hello");
// 	t_list	*Node3 = ft_lstnew("Hello");
// 	ft_lstadd_back(&Node1, Node2);
// 	ft_lstadd_back(&Node2, Node3);
// 	printf("%d\n", ft_lstsize(Node1));
// }