#include "./libft/libft.h"
#include "ft_printf.h"
void ft_putchar (char c)
{
    write (1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{	
		write (1, "-2147483648", 11);
		return ;
	}
	else if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar(n + '0');
}