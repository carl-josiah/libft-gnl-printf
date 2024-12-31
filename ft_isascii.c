/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 16:29:04 by ccastro           #+#    #+#             */
/*   Updated: 2024/08/04 07:14:28 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

// int	main(void)
// {
// 	int	c1;
// 	int	c2;
// 
// 	c1 = 32;
// 	c2 = 128;
// 	printf("ft_isascii: %d\n", ft_isascii(c1));
// 	printf("ft_isascii: %d\n", ft_isascii(c2));
// 	printf("isascii: %d\n", isascii(c1));
// 	printf("isascii: %d\n", isascii(c2));
// }
