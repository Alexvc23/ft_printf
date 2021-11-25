void	ft_putchar(char c)
{
	write(1, &c, 1);
	return ;
}

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		write(1, &s[i++], 1);
	return ;
}

int ft_putnbr(int n)
{
	long long	nb;
    int         count;

	nb = (long long)n;
	if (nb < 0)
	{
		nb *= -1;
		write(1, "-", 1);
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
    {
		ft_putchar(nb + '0');
        count++;
    }
    return (count);
}