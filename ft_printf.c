/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 13:49:31 by ccastro           #+#    #+#             */
/*   Updated: 2024/12/31 16:26:31 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	format_specification(va_list ap, char specifier)
{
	if (specifier == 'c')
		return (printf_putchar(va_arg(ap, int)));
	if (specifier == 's')
		return (printf_putstr(va_arg(ap, char *)));
	if (specifier == 'p')
		return (printf_putptr(va_arg(ap, void *)));
	if (specifier == 'd' || specifier == 'i')
		return (printf_putnbr(va_arg(ap, int)));
	if (specifier == 'u')
		return (printf_putnbr_uns(va_arg(ap, unsigned long)));
	if (specifier == 'x')
		return (printf_puthex_low(va_arg(ap, unsigned int)));
	if (specifier == 'X')
		return (printf_puthex_upp(va_arg(ap, unsigned int)));
	if (specifier == '%')
		return (printf_putchar('%'));
	return (-1);
}

int	ft_printf(const char *format, ...)
{
	int		count;
	va_list	ap;
	int		tmp;

	va_start(ap, format);
	count = 0;
	while (*format)
	{
		if (*format == '%')
		{
			tmp = format_specification(ap, *(++format));
			if (tmp == -1)
				return (-1);
			count += tmp;
		}
		else
		{
			if (write(1, format, 1) == -1)
				return (-1);
			++count;
		}
		++format;
	}
	va_end(ap);
	return (count);
}
