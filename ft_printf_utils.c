/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsantana <bsantana@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 11:21:13 by bsantana          #+#    #+#             */
/*   Updated: 2023/12/13 18:36:27 by bsantana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * @brief Número do FD do stdout
 */
#define STDOUT 1

int ft_putchar(char c)
{
	int result;

	result = write(STDOUT, &c, 1);

	return result;
}

int ft_strlen(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++) {
	}

	return i;
}

int ft_putstr(char *s)
{
	int result = 0;

	if (s == NULL) {
		return write(STDOUT, "(null)", 6);
	}

	for (int i = 0; s[i] != '\0'; i++) {
		result += write(STDOUT, &s[i], 1);
	}

	return result;
}

int ft_putnbase(long long n, char *base)
{
	int result = 0;
	int base_size;

	base_size = ft_strlen(base);

	if (n < 0) {
		result += ft_putchar('-');
		n *= -1;
	}

	if (n >= base_size) {
		result += ft_putnbase((n / base_size), base);
	}
	result += ft_putchar(base[n % base_size]);

	return result;
}

int ft_pointer(unsigned long long n, char *base)
{
	int result = 0;
	unsigned long long base_size;

	base_size = ft_strlen(base);

	if (n == 0) {
		return write(STDOUT, "(nil)", 5);
	}

	if (n >= base_size) {
		result += ft_pointer((n / base_size), base);
	} else {
		result += ft_putstr("0x");
	}
	result += ft_putchar(base[n % base_size]);

	return result;
}
