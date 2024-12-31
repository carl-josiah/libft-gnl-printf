/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 14:24:03 by ccastro           #+#    #+#             */
/*   Updated: 2024/08/04 07:14:58 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ss1;
	unsigned char	*ss2;
	size_t			i;

	ss1 = (unsigned char *) s1;
	ss2 = (unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (ss1[i] != ss2[i])
			return (ss1[i] - ss2[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	s1[20] = "Hellos";
// 	char	s2[20] = "Hellop";
// 	size_t	n;

// 	n = 6;
// 	printf("ft_memcmp: %d\n", ft_memcmp(s1, s2, n));
// 	printf("memcmp: %d\n", memcmp(s1, s2, n));
// }
