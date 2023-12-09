/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsantana <bsantana@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 15:05:13 by bsantana          #+#    #+#             */
/*   Updated: 2023/12/09 15:23:02 by bsantana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_printf(const char *type_format, ...)
{
	va_list		args;
	int			i;
	int			result;

	i = 0;
	result = 0;
	va_start(args, type_format);
	while (type_format[i])
	{
		if (i == %)
			result += ft_flags()
	}
	va_end(args);
	return (result);
}

int ft_flags()
{
	if ()
}