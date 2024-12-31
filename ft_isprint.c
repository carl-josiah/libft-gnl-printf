/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 16:33:54 by ccastro           #+#    #+#             */
/*   Updated: 2024/08/04 07:14:48 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

// int	main(void)
// {
// 	char	c1;
// 	char	c2;
// 
// 	c1 = ' ';
// 	c2 = 31;
// 	printf("ft_isprint: %d\n", ft_isprint(c1));
// 	printf("ft_isprint: %d\n", ft_isprint(c2));
// 	printf("isprint: %d\n", isprint(c1));
// 	printf("isprint: %d\n", isprint(c2));
// }
