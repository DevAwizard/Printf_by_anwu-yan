/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anwu-yan <anwu-yan@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 14:34:52 by anwu-yan          #+#    #+#             */
/*   Updated: 2024/02/13 11:04:51 by anwu-yan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_char(va_list args)
{
	char	character;

	character = va_arg(args, int);
	write (1, &character, 1);
	return (1);
}

int	ft_print_str(va_list args)
{
	char	*string;
	int		i;
	int		result;

	string = va_arg(args, char *);
	if (string == NULL)
		return (write (1, "(null)", 6), 6);
	i = 0;
	result = 0;
	while (string[i] != '\0')
	{
		write (1, &string[i++], 1);
		result = result + 1;
	}
	return (result);
}

int	ft_print_pointer(char *pointer)
{
	unsigned long long int	address;
	char					s[16];
	int						i;
	int						dig;
	int						result;

	address = (unsigned long long int) pointer;
	if (address == 0)
		return (write (1, "0x0", 3), 3);
	i = 0;
	result = write (1, "0x", 2);
	while (address)
	{
		dig = address % 16;
		if (dig > 9)
			s[i++] = dig - 10 + 'a';
		else
			s[i++] = dig + '0';
		address = address / 16;
	}
	i--;
	while (i >= 0)
		result = result + write (1, &s[i--], 1);
	return (result);
}

int	ft_checkchar(va_list args, char character)
{
	int	result;

	result = 0;
	if (character == '%')
	{
		write (1, "%", 1);
		result = 1;
	}
	else if (character == 'c')
		result = ft_print_char(args);
	else if (character == 's')
		result = ft_print_str(args);
	else if (character == 'd' || character == 'i')
		result = ft_print_nbr(va_arg(args, int));
	else if (character == 'x')
		result = ft_print_x(args);
	else if (character == 'X')
		result = ft_print_xx(args);
	else if (character == 'p')
		result = ft_print_pointer(va_arg(args, char *));
	else if (character == 'u')
		result = ft_print_unsigned(args);
	return (result);
}

int	ft_printf(char const *string, ...)
{
	int		i;
	int		result;
	va_list	args;

	result = 0;
	va_start(args, string);
	i = 0;
	while (string[i] != '\0')
	{
		if (string[i] == '%')
		{
			result = result + ft_checkchar(args, string[i + 1]);
			i = i + 2;
		}
		else
		{
			write (1, &string[i++], 1);
			result++;
		}
	}
	va_end(args);
	return (result);
}

/* #include <stdio.h>
#include <limits.h> */

/* int main (void)
{
	printf("PROPIO\n");
	ft_printf("%p", (void *)-14523);
	printf("\n");
	printf("ORIGINAL\n");
	printf("%p", (void *)-14523);
	return (0);
} */

/* int main (void)
{
	char s[] = "Hola soy Ana y voy a hacer el printf";
	char c = 'w';
	unsigned int i = 10255;
	int j = 2 ;
	int k = 3;
	
	int resultado_original;
	int resultado_propio;
	printf("Variadic functions\n");
	
	printf("PROPIO\n");
	resultado_propio = ft_printf ("String = %s\n, unsigned = %u\n, 
	hexadecimal = %x\n, pointer = %p\n, hexadecimal = %X\n, int = %i\n, 
	int = %d\n, character = %c\n and percentage %%\n", s, i, i, s, i, j, k, c);
	printf("\n");
	printf("ORIGINAL\n");
	resultado_original = printf ("String = %s\n, unsigned = %u\n, 
	hexadecimal = %x\n, 
	pointer = %p\n, hexadecimal = %X\n, int = %i\n, int = %d\n, character = %c\n 
	and percentage %%\n", s, i, i, s, i, j, k, c);
	printf("\n");
	printf (" origin result %d\n", resultado_original);
	printf (" ownnnn result %d\n", resultado_propio);
	return (0);
} */