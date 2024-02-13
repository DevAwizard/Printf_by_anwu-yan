/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anwu-yan <anwu-yan@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 14:42:13 by anwu-yan          #+#    #+#             */
/*   Updated: 2024/02/13 11:06:20 by anwu-yan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned(va_list args)
{
	unsigned int	u;
	int				result;
	int				i;
	char			s[11];

	u = va_arg(args, unsigned int);
	if (u == 0)
		return (write (1, "0", 1), 1);
	result = 0;
	i = 0;
	while (u > 0)
	{
		s[i++] = (u % 10) + 48;
		u = u / 10;
		result++;
	}
	i--;
	while (i >= 0)
		write (1, &s[i--], 1);
	return (result);
}

int	ft_print_nbr(int number)
{
	int		i;
	char	s[10];
	int		result;

	result = 0;
	i = 0;
	if (number == 0)
		return (write (1, "0", 1), 1);
	if (number < 0)
		result = result + write (1, "-", 1);
	while (number)
	{
		if (number % 10 < 0)
			s[i++] = ((number % 10) * -1) + 48;
		else
			s[i++] = (number % 10) + 48;
		number = number / 10;
		result++;
	}
	i--;
	while (i >= 0)
		write (1, &s[i--], 1);
	return (result);
}

int	ft_print_xx(va_list args)
{
	unsigned int	hexadecimal;
	char			s[11];
	int				result;
	int				i;

	hexadecimal = va_arg(args, unsigned int);
	result = 0;
	if (hexadecimal == 0)
		return (write (1, "0", 1), 1);
	i = 0;
	while (hexadecimal)
	{
		if (hexadecimal % 16 > 9)
			s[i++] = (hexadecimal % 16) - 10 + 'A';
		else
			s[i++] = hexadecimal % 16 + 48;
		hexadecimal = hexadecimal / 16;
		result++;
	}
	i--;
	while (i >= 0)
		write (1, &s[i--], 1);
	return (result);
}

int	ft_print_x(va_list args)
{
	unsigned int		hexadecimal;
	char				s[11];
	int					result;
	int					i;

	hexadecimal = va_arg(args, unsigned int);
	result = 0;
	if (hexadecimal == 0)
		return (write (1, "0", 1), 1);
	i = 0;
	while (hexadecimal)
	{
		if (hexadecimal % 16 > 9)
			s[i++] = (hexadecimal % 16) - 10 + 'a';
		else
			s[i++] = hexadecimal % 16 + 48;
		hexadecimal = hexadecimal / 16;
		result++;
	}
	i--;
	while (i >= 0)
		write (1, &s[i--], 1);
	return (result);
}
