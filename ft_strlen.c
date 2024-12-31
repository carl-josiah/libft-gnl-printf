/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 16:38:51 by ccastro           #+#    #+#             */
/*   Updated: 2024/08/26 11:39:31 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = -1;
	while (s[++i])
		;
	return (i);
}

// int	main(void)
// {
// 	char	s[5] = "Hello";

// 	printf("ft_strlen: %zu\n", ft_strlen(s));	
// 	printf("strlen: %zu\n", strlen(s));
// }
