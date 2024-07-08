/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maugusto <maugusto@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 12:55:37 by maugusto          #+#    #+#             */
/*   Updated: 2024/05/03 10:05:02 by maugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_count(unsigned long n)
{
	int	count;

	count = 0;
	while (n > 0)
	{
		n = n / 16;
		count++;
	}
	return (count);
}

int	putptrhex(unsigned long nbr)
{
	char	*base;
	int		result;

	result = 0;
	base = "0123456789abcdef";
	if (nbr >= 16)
	{
		putptrhex((nbr / 16));
		putptrhex((nbr % 16));
	}
	else
	{
		write(1, &base[nbr], 1);
	}
	return (result);
}

int	ft_putpointer(unsigned long nbr)
{
	int		result;

	result = 0;
	if (nbr == 0)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	else
	{
		result = ft_putstr("0x");
		result += ft_count(nbr);
		putptrhex(nbr);
	}
	return (result);
}
