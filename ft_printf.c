/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalenci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 11:45:20 by jvalenci          #+#    #+#             */
/*   Updated: 2021/11/25 11:57:41 by jvalenci         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include"printf.h"

/*
*va_start
enables access to variadic function arguments
(function macro)
*va_arg
accesses the next variadic function argument
(function macro)
*va_copy
makes a copy of the variadic function arguments
(function macro)
*va_end
ends traversal of the variadic function arguments
(function macro)
*va_list
holds the information needed by va_start, va_arg, va_end, and va_copy
(typedef varible)
*/

char ft_check_input(const char *s)
{
	char conv[] = "cspdiuxX";	
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		j = 0;
		while (conv[j])
		{
			if (s[i] == conv[j])
				return (conv[j]);
			j++;
		}
		i++;
	}
	return (0);
}

int ft_funcheck(va_list list, char c)
{
	int counter;

	counter = 0;
	if (c == 's')
		counter = ft_putstr(va_arg(list, char *));
	if (c == 'c')
		counter = ft_putchar(va_arg(list, int));
	if (c == 'i' || c == 'd')
		counter = ft_putnbr(va_arg(list, int), 0);
	/* 	if (c == 'x')
		counter = ft_putnbr(va_arg(list, int));
	if (c == 'p')
		counter = ft_putnbr(va_arg(list, int));
	if (c == 'i' || c == 'd')
		counter = ft_putnbr(va_arg(list, int)); */
	return (counter);
}

int	ft_printf(const char *s, ...)
{
	va_list	list;
	char	t_conv;

	va_start(list, s);
	while (*s)
	{
		if (*s == '%' && (t_conv = ft_check_input(s + 1)))
		{
			ft_funcheck(list, *(s + 1));
			s += 2;
			continue;
		}
		write(1, s, 1);
		s++;
	}
	va_end(list);
	return (0);
}

int main()
{
	int test = 234234;
	int len;
	len = ft_printf("lsdkfjldkfj%i\n", test);
	printf("%d", len);
}
