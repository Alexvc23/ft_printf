#include"printf.h"

int	ft_putchar(char c)
=======
void	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *s)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (s[i])
	{
		write(1, &s[i++], 1);
		counter++;
	}
	return (counter);
}

int ft_putnbr(int n, int count)
{
	long long	nb;

	nb = (long long)n;
	if (nb < 0)
	{
		nb *= -1;
		write(1, "-", 1);
	}
	if (nb >= 10)
	{
		ft_putnbr((nb / 10), count);
		ft_putnbr((nb % 10), count);
	}
	else
		ft_putchar(nb + '0');
	return (count++);
}
