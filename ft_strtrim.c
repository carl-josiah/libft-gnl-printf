/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 11:04:24 by ccastro           #+#    #+#             */
/*   Updated: 2024/08/21 14:06:04 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_present(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*extract(char const *s1, int start, int end)
{
	char	*s2;
	int		i;

	i = 0;
	s2 = (char *) malloc(sizeof(char) * (end - start + 2));
	if (!s2)
		return (NULL);
	while (start <= end)
	{
		s2[i] = s1[start];
		i++;
		start++;
	}
	s2[i] = '\0';
	return (s2);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	start;
	int	end;

	start = 0;
	while (s1[start])
	{
		if (!is_present(s1[start], set))
			break ;
		start++;
	}
	end = (int) ft_strlen(s1) - 1;
	while (end >= 0)
	{
		if (!is_present(s1[end], set))
			break ;
		end--;
	}
	if (start > end)
		return (ft_strdup(""));
	return (extract(s1, start, end));
}

// int	main(void)
// {
// 	printf("%s\n", ft_strtrim("numbers123numbers", "num"));
// }