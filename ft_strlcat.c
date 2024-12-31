/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 14:24:17 by ccastro           #+#    #+#             */
/*   Updated: 2024/08/04 07:16:08 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;
	size_t	j;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	j = dst_len;
	if (dstsize < dst_len + 1)
		return (dstsize + src_len);
	while (src[i] && j < dstsize - 1)
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[j] = '\0';
	return (dst_len + src_len);
}

// int	main(void)
// {
// 	char	dst1[20] = "Hello";
// 	char	src1[10] = "Hello";
// 	char	dst2[20] = "Hello";
// 	char	src2[10] = "Hello";
// 	size_t	dstsize1;
// 	size_t	dstsize2;
// 
// 	dstsize1 = 4;
// 	dstsize2 = 4;
// 	printf("ft_strlcat\n");
// 	printf("dst1 bef: %s\n", dst1);
// 	printf("src1 bef: %s\n", src1);
// 	printf("%zu\n", ft_strlcat(dst1, src1, dstsize1));
// 	printf("dst1 aft: %s\n", dst1);
// 	printf("src1 aft: %s\n", src1);
// 	printf("\n");
// 	printf("strlcat\n");
// 	printf("dst2 bef: %s\n", dst2);
// 	printf("src2 bef: %s\n", src2);
// 	printf("%zu\n", strlcat(dst2, src2, dstsize2));
// 	printf("dst2 aft: %s\n", dst2);
// 	printf("src2 aft: %s\n", src2);
// }
