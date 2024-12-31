/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 15:54:55 by ccastro           #+#    #+#             */
/*   Updated: 2024/08/09 15:22:58 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*pdst;
	unsigned char	*psrc;
	size_t			i;

	pdst = (unsigned char *) dst;
	psrc = (unsigned char *) src;
	i = -1;
	if (pdst == NULL && psrc == NULL)
		return (NULL);
	while (++i < n)
		pdst[i] = psrc[i];
	return (dst);
}

// int	main(void)
// {
// 	char	s1[10] = "condition";
// 	char	s2[10] = "condition";
// 	printf("before ft_memcpy: %s\n", s1);
// 	ft_memcpy(s1 + 2, s1, 6);
// 	printf("after ft_memcpy: %s\n", s1);
// 	printf("before memcpy: %s\n", s2);
//  memcpy(s2 + 2, s2, 6);
// 	printf("after: %s\n", s2);
// }
