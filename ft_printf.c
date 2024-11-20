/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abifkirn <abifkirn@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 17:53:50 by abifkirn          #+#    #+#             */
/*   Updated: 2024/11/20 17:56:28 by abifkirn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	lst;
	int		count;

	count = 0;
	if (format == NULL || write(1, 0, 0) == -1)
		return (-1);
	va_start(lst, format);
	while (*format != '\0')
	{
		if (*format == '%')
			count += print_param(lst, *(++format));
		else if (*format == '\n')
			count += write(1, "\n", 1);
		else
			count += write(1, format, 1);
		format++;
	}
	va_end(lst);
	return (count);
}
