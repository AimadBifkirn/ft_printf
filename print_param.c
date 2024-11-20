/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_param.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abifkirn <abifkirn@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 17:53:34 by abifkirn          #+#    #+#             */
/*   Updated: 2024/11/20 18:02:40 by abifkirn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_param(va_list lst, char c)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_putchar(va_arg(lst, int));
	else if (c == 's')
		count += ft_putstr(va_arg(lst, char *));
	else if (c == 'p')
		count += putptr_hex(va_arg(lst, unsigned long), "0123456789abcdef");
	else if (c == 'x')
		count += putnbr_hlower(va_arg(lst, unsigned), "0123456789abcdef");
	else if (c == 'X')
		count += putnbr_hlower(va_arg(lst, unsigned), "0123456789ABCDEF");
	else if (c == 'd' || c == 'i')
		count += ft_putnbr(va_arg(lst, int));
	else if (c == '%')
		count += write(1, "%", 1);
	else if (c == 'u')
		count += putunsigned(va_arg(lst, unsigned));
	else
	{
		count += write(1, "%", 1);
		count += write(1, &c, 1);
	}
	return (count);
}
