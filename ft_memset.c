/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 16:50:16 by ccastro           #+#    #+#             */
/*   Updated: 2024/08/04 07:15:11 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*bb;
	unsigned char	cc;
	size_t			i;

	bb = (unsigned char *) b;
	cc = (unsigned char) c;
	i = 0;
	while (len-- > 0)
		bb[i++] = cc;
	return (b);
}

// int	main(void)
// {
// 	char	b[10] = "Hello";
// 	char	c;
// 	size_t	len;

// 	c = 'o';
// 	len = 3;
// 	ft_memset(b, c, len);
// 	printf("ft_memset: %s\n", b);
// 	memset(b, c, len);
// 	printf("memset: %s\n", b);
// }
