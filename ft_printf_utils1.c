/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsantana <bsantana@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 11:21:13 by bsantana          #+#    #+#             */
/*   Updated: 2023/12/12 16:26:37 by bsantana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	int	result;

	result = write(1, &c, 1);
	return (result);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_putstr(char *s)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	if (s == NULL)
		return (write(1, "(null)", 6));
	while (s && s[i] != 0)
	{
		result += write (1, &s[i], 1);
		i++;
	}
	return (result);
}
