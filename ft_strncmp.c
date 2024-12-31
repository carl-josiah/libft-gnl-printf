/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 09:59:19 by ccastro           #+#    #+#             */
/*   Updated: 2024/08/04 07:16:27 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && i < n - 1)
	{
		if (s1[i] != s2[i])
			break ;
		i++;
	}
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}

// int	main(void)
// {
// 	char	s1[20] = "Hellop";
// 	char	s2[20] = "Hellos";
// 	size_t	n;
// 
// 	n = 0;
// 	printf("ft_strncmp: %d\n", ft_strncmp(s1, s2, n));
// 	printf("strncmp: %d\n", strncmp(s1, s2, n));
// }
