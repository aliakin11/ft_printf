#include "ft_printf.h"
int	ft_size_hex(unsigned int num)
{
	int	i;

	i = 0;
	while (num != 0)
	{
		num /= 16;
		i++;
	}
	return (i);
}

void    dectohex(unsigned long int n)
{
    long int    r;
    if (n > 0)
    {
        r = n % 16;
        dectohex (n / 16);
        if (r == 10)
            ft_putchar('A');
       else if (r == 11)
            ft_putchar('B');
       else if (r == 12)
            ft_putchar('C');
       else if (r == 13)
            ft_putchar('D');
       else if (r == 14)
            ft_putchar('E');
       else if (r == 15)
            ft_putchar('F');
        else
            ft_putnbr(r);
    }
}

int	ft_print_hex(unsigned int num)
{
	if (num == 0)
		return (write(1, "0", 1));
	else
		dectohex(num);
	return (ft_size_hex(num));
}
