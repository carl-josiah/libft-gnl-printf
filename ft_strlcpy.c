/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 17:25:26 by ccastro           #+#    #+#             */
/*   Updated: 2024/08/04 07:16:18 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	srcsize;

	i = 0;
	srcsize = ft_strlen(src);
	if (dstsize == 0)
		return (srcsize);
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (srcsize);
}

// int	main(void)
// {
// 	char	dst1[20] = "Life is good.";
// 	char	dst2[20] = "Life is good.";
// 	char	src1[20] = "Hello, world!";
// 	char	src2[20] = "Hello, world!";
// 	size_t	dstsize;
// 
// 	dstsize = 3;
// 	printf("src1 before ft_strlcpy: %s\n", src1);
// 	printf("dst1 before ft_strlcpy: %s\n", dst1);
// 	printf("\n");
// 	ft_strlcpy(dst1, src1, dstsize);
// 	printf("src1 after ft_strlcpy: %s\n", src1);
// 	printf("dst1 after ft_strlcpy: %s\n", dst1);
// 	printf("ft_strlcpy return: %zu\n", ft_strlcpy(dst1, src1, dstsize));
// 	printf("\n");
// 	printf("\n");
// 	printf("src2 before strlcpy: %s\n", src2);
// 	printf("dst2 before strlcpy: %s\n", dst2);
// 	printf("\n");
// 	strlcpy(dst2, src2, dstsize);
// 	printf("src2 after strlcpy: %s\n", src2);
// 	printf("dst2 after strlcpy: %s\n", dst2);
// 	printf("strlcpy return: %zu\n", strlcpy(dst2, src2, dstsize));
// }
