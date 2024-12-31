/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 22:29:37 by ccastro           #+#    #+#             */
/*   Updated: 2024/08/09 15:14:07 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;

	d = (char *) dst;
	s = (char *) src;
	if (dst > src)
	{
		while (len--)
			d[len] = s[len];
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}

// int	main(void)
// {
// 	char	s1[10] = "condition";
// 	char	s2[10] = "condition";
// 	printf("before ft_memmove: %s\n", s1);
// 	ft_memmove(s1 + 2, s1, 6);
// 	printf("after ft_memmove: %s\n", s1);
// 	printf("before memmove: %s\n", s2);
// 	memmove(s2 + 2, s2, 6);
// 	printf("after memmove: %s\n", s2);
// }