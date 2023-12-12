/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_flags.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsantana <bsantana@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 11:27:08 by bsantana          #+#    #+#             */
/*   Updated: 2023/12/12 16:18:02 by bsantana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	ft_flags(char flag, va_list args)
{
	if (flag == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (flag == 's')
		return (ft_putstr(va_arg(args, char *)));
	// if (flag == 'p')
	// 	return ();
	if (flag == 'd' || flag == 'i')
		return (ft_putnbase(va_arg(args, int), DECIMAL_BASE));
	if (flag == 'x')
		return (ft_putnbase(va_arg(args, unsigned int), HEXA_LOWER_BASE));
	if (flag == 'X')
		return (ft_putnbase(va_arg(args, unsigned int), HEXA_UPPER_BASE));
	if (flag == '%')
		return (ft_putchar('%'));
	if (flag == 'u')
		return (ft_unsigned(va_arg(args, unsigned int), DECIMAL_BASE));
	return (0);
}
