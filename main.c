/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsantana <bsantana@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 14:59:49 by bsantana          #+#    #+#             */
/*   Updated: 2023/12/13 18:12:15 by bsantana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	ft_printf("Minha função: ");
	ft_printf("%c\n", '0');
	printf("Função original: ");
	printf("%c\n", '0');

	ft_printf("Minha função: \n");
	ft_printf("%s\n", "Que bom que você concluiu a ft_prinf!");
	printf("Função original: \n");
	printf("%s\n", "Que bom que você concluiu a ft_prinf!");

	printf("Função original: ");
	printf("%d\n", -1);
	ft_printf("Meu número: ");
	ft_printf("%d\n", -1);

	printf("Função original: ");
	printf("%i\n", 42);
	ft_printf("Meu número: ");
	ft_printf("%i\n", 42);

	printf("Função original: \n");
	printf("%x\n", -42);
	ft_printf("Meu hexadecimal minúsculo: \n");
	ft_printf("%x\n", -42);

	printf("Função original: \n");
	printf("%X\n", -10);
	ft_printf("Meu hexadecimal maiúsculo: \n");
	ft_printf("%X\n", -10);

	printf("Função original: ");
	printf("%u\n", -1);
	ft_printf("Meu número: ");
	ft_printf("%u\n", -1);

	printf("Função original: \n");
	printf("%p\n", -42);
	ft_printf("Meu ponteiro: \n");
	ft_printf("%p\n", -42);

	return (0);
}
