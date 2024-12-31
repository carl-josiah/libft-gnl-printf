/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 16:04:55 by ccastro           #+#    #+#             */
/*   Updated: 2024/08/04 07:14:53 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		*ss;
	unsigned char		cc;
	size_t				i;

	ss = (unsigned char *) s;
	cc = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (ss[i] == cc)
			return (&ss[i]);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	*s;
// 	int		c;
// 	size_t	n;

// 	s = "Hello world";
// 	c = 'l';
// 	n = 3;
// 	printf("before: %s\n", s);
// 	printf("after ft_memchr: %s\n", ft_memchr(s, c, n));
// 	printf("before: %s\n", s);
// 	printf("after memchr: %s\n", memchr(s, c, n));
// }