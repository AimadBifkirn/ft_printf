/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putptr_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abifkirn <abifkirn@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 17:53:15 by abifkirn          #+#    #+#             */
/*   Updated: 2024/11/20 18:07:25 by abifkirn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	work(unsigned long nbr, char *base)
{
	int	count;

	count = 0;
	if (nbr >= 16)
		count += work(nbr / 16, base);
	count += ft_putchar(base[nbr % 16]);
	return (count);
}

int	putptr_hex(unsigned long nbr, char *base)
{
	int	count;

	count = 0;
	if (nbr == 0)
	{
		count += write(1, "(nil)", 5);
		return (count);
	}
	count += write(1, "0x", 2);
	count += work(nbr, base);
	return (count);
}
