/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 13:49:28 by ccastro           #+#    #+#             */
/*   Updated: 2024/12/31 16:26:31 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>

int	ft_printf(const char *format, ...);
int	printf_putchar(int c);
int	printf_putstr(char *str);
int	printf_putnbr(int nbr);
int	printf_putnbr_uns(unsigned int nbr);
int	printf_puthex_low(unsigned int nbr);
int	printf_puthex_upp(unsigned int nbr);
int	printf_putptr(void *ptr);

#endif