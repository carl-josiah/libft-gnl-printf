/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 16:02:31 by ccastro           #+#    #+#             */
/*   Updated: 2024/08/16 11:26:40 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	n_count(int n)
{
	size_t	len;

	len = 0;
	if (n == 0)
	{
		len = 1;
		return (len);
	}
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	size_t		len;
	long long	num;
	char		*s;

	len = n_count(n);
	num = (long long) n;
	if (n < 0)
	{
		num *= -1;
		len++;
	}
	s = (char *) malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		return (NULL);
	s[len] = '\0';
	while (len--)
	{
		*(s + len) = ((num % 10) + '0');
		num /= 10;
	}
	if (n < 0)
		s[0] = '-';
	return (s);
}

// int	main(void)
// {
// 	int	nbr = 10;
// 	// printf("count: %zu\n", n_count(nbr));
// 	// printf("%s","0");
// 	printf("%s\n", ft_itoa(nbr));
// }