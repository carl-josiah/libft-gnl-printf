/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_putnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 23:33:11 by ccastro           #+#    #+#             */
/*   Updated: 2024/12/31 16:25:42 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printf_putnbr(int nbr)
{
	int	count;
	int	tmp;

	count = 0;
	if (nbr == INT_MIN)
		return (printf_putstr("-2147483648"));
	if (nbr < 0)
	{
		tmp = printf_putchar('-');
		if (tmp == -1)
			return (-1);
		count += tmp;
		nbr = -nbr;
	}
	if (nbr >= 10)
	{
		count += printf_putnbr(nbr / 10);
		if (count == -1)
			return (-1);
	}
	if (printf_putchar((nbr % 10) + '0') == -1)
		return (-1);
	++count;
	return (count);
}
