/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_address.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex-ubuntu <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 17:46:54 by alex-ubun         #+#    #+#             */
/*   Updated: 2021/11/28 17:50:44 by alex-ubun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putnbr_basel(unsigned long long nbr, char *base, int counter)
{
	unsigned long long lenbase;

	lenbase = ft_strlen(base);
	if (!ft_checkstr(base))
		return (0);
	if (nbr >= lenbase)
	{
		counter = ft_putnbr_basel((nbr / lenbase), base, counter);
		counter = ft_putnbr_basel((nbr % lenbase), base, counter);
	}
	else
	{
		write(1, base + nbr, 1);
		++counter;
	}
	return (counter);
}

int ft_print_address(void *address)
{
	int counter;

	counter = 0;
	long long new_address;
	new_address = (long long)address;
	if (!address)
	{
		counter += ft_putstr("(nil)");
		return (counter);
	}
	counter += ft_putstr("0x");
	counter += ft_putnbr_basel(new_address, HEXA_LOW, 0);
	return (counter);
}