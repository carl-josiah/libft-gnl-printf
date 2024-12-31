/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 09:51:52 by ccastro           #+#    #+#             */
/*   Updated: 2024/08/04 07:16:38 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

// int	main(void)
// {
// 	int	c;
// 	int	cc;
// 
// 	c = 'B';
// 	cc = 'B';
// 	printf("before ft_tolower: %c\n", c);
// 	printf("after ft_tolower: %c\n", ft_tolower(c));
// 	printf("before tolower: %c\n", cc);
// 	printf("after tolower: %c\n", tolower(cc));
// }
