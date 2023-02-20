#include "ft_printf.h"

int	ft_lsize_hex(unsigned int num)
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

void    ldectohex(unsigned long int n)
{
    long int    r;
    if (n > 0)
    {
        r = n % 16;
        ldectohex (n / 16);
        if (r == 10)
            ft_putchar('a');
       else if (r == 11)
            ft_putchar('b');
       else if (r == 12)
            ft_putchar('c');
       else if (r == 13)
            ft_putchar('d');
       else if (r == 14)
            ft_putchar('e');
       else if (r == 15)
            ft_putchar('f');
        else
            ft_putnbr(r);
    }
}
int	ft_lprint_hex(unsigned int num)
{
	if (num == 0)
		return (write(1, "0", 1));
	else
		ldectohex(num);
	return (ft_size_hex(num));
}
