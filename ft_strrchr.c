/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 12:23:02 by ccastro           #+#    #+#             */
/*   Updated: 2024/08/04 07:16:33 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	cc;
	size_t	i;

	cc = (char) c;
	i = ft_strlen(s);
	while (i > 0)
	{
		if (s[i] == cc)
			return ((char *) &s[i]);
		i--;
	}
	if (s[i] == cc)
		return ((char *) &s[i]);
	return (NULL);
}

// int	main(void)
// {
// 	char	*s;
// 	char	c;

// 	s = "Candy mandy mandy";
// 	c = 'm';
// 	printf("ft_strrchr: %s\n", ft_strrchr(s, c));
// 	printf("ft_strrchr: %s\n", strrchr(s, c));
// }