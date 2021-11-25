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

void ft_putstr(char *s)
{
	write(1, s, strlen(s));
	return ;
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
			if (t_conv == 's')
				ft_putstr(va_arg(list, char*));
			if (t_conv == 'd')
				ft_putnbr(va_arg(list, int));
			if (t_conv == 'c')
				ft_putchar(va_arg(list, char));
			if (t_conv == 'c')
				ft_putchar(va_arg(list, char));

		}
		s++;
	}
	va_end(list);
	return (0);
}

int main()
{
	char *test = "hola";
	ft_printf("lsdkfjldkfj%s", test);
}
