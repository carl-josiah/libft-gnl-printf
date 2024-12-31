/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_putnbr_uns.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 23:52:40 by ccastro           #+#    #+#             */
/*   Updated: 2024/10/11 16:31:52 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printf_putnbr_uns(unsigned int nbr)
{
	int	count;
	int	tmp;
	int	out;

	count = 0;
	if (nbr >= 10)
	{
		tmp = printf_putnbr_uns(nbr / 10);
		if (tmp == -1)
			return (-1);
		count += tmp;
	}
	out = (nbr % 10) + '0';
	if (write(1, &out, 1) == -1)
		return (-1);
	++count;
	return (count);
}
