/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsantana <bsantana@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 15:36:26 by bsantana          #+#    #+#             */
/*   Updated: 2023/12/13 16:12:08 by bsantana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>

/**
 * @brief Lista de caracteres da base decimal.
 */
#define DECIMAL_BASE "0123456789"

/**
 * @brief Lista de caracteres da base hexadecimal, com as letras em maiúsculo.
 */
#define HEXA_UPPER_BASE "0123456789ABCDEF"

/**
 * @brief Lista de caracteres da base hexadecimal, com as letras em minúsculo.
 */
#define HEXA_LOWER_BASE "0123456789abcdef"

/**
 * @brief Imprime na saída padrão uma string formatada.
 *
 * @param type_format Texto com flags de formatação;
 * @param ... Lista variável de argumentos que substitui as flags do texto formatado;
 * @retval -1 caso o argumento type_format seja NULL;
 * @retval Um inteiro positivo representando a quantidade de caracteres impressos.
 */
int ft_printf(const char *type_format, ...);

/**
 * @brief Imprime na saída padrão uma flag com o valor substituído.
 *
 * @param flag Char com a especificação das flags;
 * @param args Lista variável de argumentos;
 * @return Um inteiro positivo representando a quantidade de caracteres impressos.
 */
int ft_flags(char flag, va_list args);

/**
 * @brief Escreve um caractere na saída padrão.
 *
 * @param c Caractere que será escrito;
 * @return Um inteiro positivo representando a quantidade de caracteres impressos.
 */
int ft_putchar(char c);

/**
 * @brief Obtém a quantidade de caracteres presentes em uma string.
 *
 * @param str String alvo da contagem;
 * @return Quantidade de caracteres presentes na string.
 */
int ft_strlen(char *str);

/**
 * @brief Escreve uma string não formatada na saída padrão.
 *
 * @param s String que será escrita;
 * @return Um inteiro positivo representando a quantidade de caracteres impressos.
 */
int ft_putstr(char *s);

/**
 * @brief Escreve um número, na saída padrão, usando a base escolhida.
 *
 * @param n Número para ser impresso;
 * @param base String com os caracteres da base escolhida;
 * @return Um inteiro positivo representando a quantidade de caracteres impressos.
 */
int ft_putnbase(long long n, char *base);

/**
 * @brief Escreve o endereço de um ponteiro, na saída padrão, usando a base escolhida.
 *
 * @param n Ponteiro para ser impresso;
 * @param base String com os caracteres da base escolhida;
 * @return Um inteiro positivo representando a quantidade de caracteres impressos.
 */
int ft_pointer(unsigned long long n, char *base);

#endif
