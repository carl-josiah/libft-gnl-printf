/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 14:52:18 by ccastro           #+#    #+#             */
/*   Updated: 2024/08/04 07:14:45 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

// int	main(void)
// {
// 	char	c1;
// 	char	c2;
// 
// 	c1 = '1';
// 	c2 = ' ';
// 	printf("ft_isdigit: %d\n", ft_isdigit(c1));
// 	printf("ft_isdigit: %d\n", ft_isdigit(c2));
// 	printf("isdigit: %d\n", isdigit(c1));
// 	printf("isdigit: %d\n", isdigit(c2));
// }
