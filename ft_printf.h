/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abifkirn <abifkirn@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 17:53:47 by abifkirn          #+#    #+#             */
/*   Updated: 2024/11/20 17:58:52 by abifkirn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int	ft_putnbr(int nb);
int	ft_printf(const char *format, ...);
int	putptr_hex(unsigned long nbr, char *base);
int	putunsigned(unsigned int nb);
int	putnbr_hlower(unsigned long nbr, char *base);
int	putnbr_hupper(unsigned long nbr, char *base);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	print_param(va_list lst, char c);

#endif
