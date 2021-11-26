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

/* MACROS */
#define HEXA_LOW    "0123456789abcdef"
#define HEXA_UP     "0123456789ABCDEF"

int ft_putchar(char c);
int ft_putnbr(int n, int count);
int ft_putstr(char *s);
int ft_unsigned_putnbr(unsigned int n, int count);
int	ft_putnbr_base(unsigned int nbr, char *base, int counter);

# endif