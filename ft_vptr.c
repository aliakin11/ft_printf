#include "ft_printf.h"
#include "./libft/libft.h"

int	ft_size_p(uintptr_t p)
{
	int	i;

	i = 0;
	while (p != 0)
	{
		p /= 16;
		i++;
	}
	return (i);
}

int	ft_print_p(uintptr_t p)
{
	int	len;

	len = 0;
	len += write(1, "0x", 2);
	if (p == 0)
		len += write(1, "0", 1);
	else
	{
		dectohex(p);
		len += ft_size_p(p);
	}
	return (len);
}
