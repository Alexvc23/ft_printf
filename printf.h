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

int ft_putchar(char c);
int ft_putnbr(int n, int count);
int ft_putstr(char *s);
int ft_unsigned_putnbr(unsigned int n, int count);

# endif