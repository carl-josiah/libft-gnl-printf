/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 17:13:46 by ccastro           #+#    #+#             */
/*   Updated: 2024/08/26 14:23:42 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*s;

	if (size && count >= SIZE_MAX / size)
		return (NULL);
	s = (char *) malloc(size * count);
	if (!s)
		return (NULL);
	ft_bzero(s, size * count);
	return (s);
}

// int	main(void)
// {
// 	int	i;
// 	int	count;
// 	int	*array;

// 	i = -1;
// 	count = 5;
// 	array = (int *) ft_calloc(count, sizeof(int));
// 	while (++i < count)
// 		printf("{%d}\n", array[i]);
// }
