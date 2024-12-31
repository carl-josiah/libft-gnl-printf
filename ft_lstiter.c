/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 13:20:12 by ccastro           #+#    #+#             */
/*   Updated: 2024/08/26 13:04:38 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL || f == NULL)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// static void function(void *content)
// {
// 	char	**temp = (char **) content;
//     *temp += 1;
// }

// int main(void)
// {
// 	t_list *Node1 = ft_lstnew(ft_strdup("Hello"));
// 	printf("%s\n", Node1->content);
// 	ft_lstiter(Node1, function);
// 	printf("%s\n", Node1->content);
// }
