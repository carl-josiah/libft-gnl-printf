/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 09:44:23 by ccastro           #+#    #+#             */
/*   Updated: 2024/08/13 16:01:30 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*s1;

	i = -1;
	s1 = (char *) malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!s || !f)
		return (NULL);
	if (s1 == NULL)
		return (NULL);
	while (s[++i])
		s1[i] = (*f)(i, s[i]);
	s1[i] = '\0';
	return (s1);
}

// static char	my_toupper(unsigned int i, char c)
// {
// 	(void) i;
// 	if (c >= 'a' && c <= 'z')
// 		return (c - 32);
// 	return (c);
// }

// int	main(void)
// {
// 	char str[6] = "hello";

// 	printf("%s\n", ft_strmapi(str, my_toupper));
// }