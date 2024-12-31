/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 14:54:41 by ccastro           #+#    #+#             */
/*   Updated: 2024/08/04 07:14:20 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) == 1 || ft_isdigit(c) == 1)
		return (1);
	return (0);
}

// int	main(void)
// {
// 	char	c1;
// 	char	c2;
// 	
// 	c1 = 'S';
// 	c2 = '2';
// 	printf("ft_isalnum alp: %d\n", ft_isalnum(c1));
// 	printf("ft_isalnum num: %d\n", ft_isalnum(c2));
// 	printf("isalnum alp: %d\n", isalnum(c1));
// 	printf("isalnum num: %d\n", isalnum(c2));
// }
