/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsantana <bsantana@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 15:36:26 by bsantana          #+#    #+#             */
/*   Updated: 2023/12/12 16:34:36 by bsantana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

# define DECIMAL_BASE "0123456789"
# define HEXA_UPPER_BASE "0123456789ABCDEF"
# define HEXA_LOWER_BASE "0123456789abcdef"

int		ft_printf(const char *type_format, ...);
char	ft_flags(char flag, va_list args);
int		ft_putchar(char c);
int		ft_putstr(char *s);
char	ft_flags(char flag, va_list args);
int		ft_putnbase(long long n, char *base);
int		ft_unsigned(long long n, char *base);
int		ft_strlen(char *str);

#endif