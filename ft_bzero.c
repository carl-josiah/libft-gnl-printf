/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 17:14:22 by ccastro           #+#    #+#             */
/*   Updated: 2024/08/26 11:39:09 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ps;

	ps = (unsigned char *) s;
	while (n--)
		*ps++ = '\0';
}

// int	main(void)
// {
// 	char	s1[] = "HEllo bro";
// 	char	s2[] = "HEllo bro";
// 	ft_bzero(s1, 65535);
// 	bzero(s1, 65535);
// 	printf("ft_bzero: %s\n", s1);
// 	printf("bzero: %s\n", s2);
// }
