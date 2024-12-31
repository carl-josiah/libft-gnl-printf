/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 14:48:34 by ccastro           #+#    #+#             */
/*   Updated: 2024/08/20 12:44:59 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned long long	nbr;
	int					sign;

	nbr = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || (*str == 32))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		nbr = ((nbr * 10) + (*str - '0'));
		if (nbr > LLONG_MAX && sign == -1)
			return (0);
		if (nbr > LLONG_MAX)
			return (-1);
		str++;
	}
	return (nbr * sign);
}

// int	main(void)
// {
// 	char	str1[] = "   -214748364721474836471234567";
// 	char	str2[] = "   214748364721474836471234567";
// 	printf("ft_atoi: %d\n", ft_atoi(str1));
// 	printf("atoi: %d\n", atoi(str1));
// 	printf("ft_atoi: %d\n", ft_atoi(str2));
// 	printf("atoi: %d\n", atoi(str2));
// }