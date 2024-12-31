/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_puthex_upp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 13:38:19 by ccastro           #+#    #+#             */
/*   Updated: 2024/10/11 16:39:00 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printf_puthex_upp(unsigned int nbr)
{
	int	count;
	int	tmp;

	count = 0;
	if (nbr >= 16)
	{
		tmp = printf_puthex_upp(nbr / 16);
		if (tmp == -1)
			return (-1);
		count += tmp;
	}
	if (write(1, &"0123456789ABCDEF"[nbr % 16], 1) == -1)
		return (-1);
	++count;
	return (count);
}
