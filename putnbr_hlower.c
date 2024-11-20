/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr_hlower.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abifkirn <abifkirn@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 17:53:22 by abifkirn          #+#    #+#             */
/*   Updated: 2024/11/20 18:29:30 by abifkirn         ###   ########.fr       */
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

int	putnbr_hlower(unsigned long nbr, char *base)
{
	int	count;

	count = 0;
	if (nbr == 0)
	{
		count += write(1, "0", 1);
		return (count);
	}
	count += work(nbr, base);
	return (count);
}
