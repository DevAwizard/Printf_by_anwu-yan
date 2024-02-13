/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andeviei <andeviei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 18:23:29 by andeviei          #+#    #+#             */
/*   Updated: 2024/02/13 18:26:40 by andeviei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	ft_printf("%d\n", 500500);
	ft_printf("%d\n", 0);
	ft_printf("%d\n", -2147483648);
	ft_printf("%d\n", 2147483647);
	ft_printf("%x\n", 2147483647);
	ft_printf("%X\n", 0x7f);
	ft_printf("%X\n", 0x1a6e);
	ft_printf("%s\n", "HOLA MUNDO");
	ft_printf("%s\n", "");
	ft_printf("%c\n", 'j');
	ft_printf("HOLA SOY %s\n", NULL);
	ft_printf("%%\n");
	ft_printf("%j\n");
}
