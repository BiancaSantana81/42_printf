/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsantana <bsantana@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 14:59:49 by bsantana          #+#    #+#             */
/*   Updated: 2023/12/12 16:49:25 by bsantana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
// 	ft_printf("Minha função: ");
// 	ft_printf("%c\n", '0');
// 	printf("Função original: ");
// 	printf("%c", '0');

	// char *s2 = "Mussum Ipsum, cacilds vidis litro abertis. Posuere libero varius. Nullam a nisl ut ante blandit hendrerit. Aenean sit amet nisi. Atirei o pau no gatis, per gatis num morreus.";
	// ft_printf("Minha função: ");
	// ft_printf(" %s %s %s %s %s\n", " - ", "", "4", "", s2);
	// printf("Função original: ");
	// printf("%s %s %s %s %s", " - ", "", "4", "", s2);

	// printf("Função original: ");
	// printf("%d\n", -1);
	// ft_printf("Meu número: ");
	// ft_printf("%d\n", -1);

	// printf("Função original: ");
	// printf("%i\n", 42);
	// ft_printf("Meu número: ");
	// ft_printf("%i\n", 42);

	// printf("Função original: ");
	// printf("%x\n", -10);
	// ft_printf("Meu hexadecimal minúsculo: ");
	// ft_printf("%x\n", -10);

	// printf("Função original: ");
	// printf("%X\n", -10);
	// ft_printf("Meu hexadecimal maiúsculo: ");
	// ft_printf("%X\n", -10);

	// printf("Função original: ");
	// printf("%u\n", -1);
	// ft_printf("Meu número: ");
	// ft_printf("%u\n", -1);

	printf("Função original: ");
	printf("%p\n", -10);
	ft_printf("Meu número: ");
	ft_printf("%p\n", -1);

	return (0);
}
