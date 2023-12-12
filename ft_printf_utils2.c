/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utlis2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsantana <bsantana@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 16:25:41 by bsantana          #+#    #+#             */
/*   Updated: 2023/12/12 16:26:41 by bsantana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbase(long long n, char *base)
{
	int	result;
	int	base_size;

	result = 0;
	base_size = ft_strlen(base);
	if (n < 0)
	{
		result += ft_putchar('-');
		n = n * -1;
	}
	if (n >= base_size)
		result += ft_putnbase((n / base_size), base);
	result += ft_putchar(base[n % base_size]);
	return (result);
}

int	ft_unsigned(long long n, char *base)
{
	int	result;
	int	base_size;

	result = 0;
	base_size = ft_strlen(base);
	if (n < 0)
	{
		result += ft_putchar('-');
		n = n * -1;
	}
	if (n >= base_size)
		result += ft_putnbase((n / base_size), base);
	result += ft_putchar(base[n % base_size]);
	return (result);
}
