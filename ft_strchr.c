/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 11:08:39 by ccastro           #+#    #+#             */
/*   Updated: 2024/08/04 07:16:03 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	cc;

	i = 0;
	cc = (char) c;
	while (s[i])
	{
		if (s[i] == cc)
			return ((char *) &s[i]);
		i++;
	}
	if (s[i] == cc)
		return ((char *) &s[i]);
	return (NULL);
}

// int	main(void)
// {
// 	char	s[30] = "Banana Apples Oranges";
// 	char	ss[30] = "Banana Apples Oranges";
// 	int		c;
// 
// 	c = 'l';
// 	printf("before ft_strchr: %s\n", s);
// 	printf("after ft_strchr: %s\n", ft_strchr(s, c));
// 	printf("before strchr: %s\n", ss);
// 	printf("after strchr: %s\n", strchr(ss, c));
// }
