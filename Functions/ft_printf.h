/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anwu-yan <anwu-yan@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:25:27 by anwu-yan          #+#    #+#             */
/*   Updated: 2024/02/13 11:05:16 by anwu-yan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_print_char(va_list args);
int	ft_print_str(va_list args);
int	ft_print_pointer(char *pointer);
int	ft_print_nbr(int number);
int	ft_print_xx(va_list args);
int	ft_print_x(va_list args);
int	ft_checkchar(va_list args, char character);
int	ft_print_unsigned(va_list args);
int	ft_printf(char const *string, ...);

#endif