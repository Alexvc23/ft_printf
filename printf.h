/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalenci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 11:50:00 by jvalenci          #+#    #+#             */
/*   Updated: 2021/11/25 11:52:17 by jvalenci         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# ifndef PRINTF_H
# define PRINTF_H
#include<stdarg.h>
#include<stdio.h>
#include<string.h>
#include<unistd.h>


/*FUNCTION PROTOTYPES*/

void ft_putchar(char c);
void ft_putstr(char *s);
int ft_putnbr(int n);
int	ft_atoi(const char *str);

#endif
