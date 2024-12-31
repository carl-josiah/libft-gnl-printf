/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_puthex_low.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 10:07:40 by ccastro           #+#    #+#             */
/*   Updated: 2024/12/31 16:26:08 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printf_puthex_low(unsigned int nbr)
{
	int	count;
	int	tmp;

	count = 0;
	if (nbr >= 16)
	{
		tmp = printf_puthex_low(nbr / 16);
		if (tmp == -1)
			return (-1);
		count += tmp;
	}
	if (write(1, &"0123456789abcdef"[nbr % 16], 1) == -1)
		return (-1);
	++count;
	return (count);
}
