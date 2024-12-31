/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 12:17:41 by ccastro           #+#    #+#             */
/*   Updated: 2024/08/26 13:54:21 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL)
		return ;
	del(lst->content);
	free(lst);
}

// static void dele(void *content)
// {
// 	free(content);
// }

// int	main(void)
// {
// 	t_list	*Node1 = ft_lstnew(ft_strdup("HellO"));
// 	printf("%s\n", Node1->content);
// 	ft_lstdelone(Node1, dele);
// 	printf("%s\n", Node1->content);
// }
