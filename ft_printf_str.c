#include "./libft/libft.h"
#include "ft_printf.h"

int ft_lputstr(char *str)
{
    int i;

    i = 0;
    if (!str)
        write(1, "(null)", 6);
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
    return (i);
}

int ft_lputnbr(int nbr)
{
    char    *s;
    int	length;

    s = ft_itoa(nbr);
    length = ft_lputstr(s);
    free(s);
    return (length);
}

int ft_lputunbr(int nbr)
{
    char    *s;
	int	length;

	s = ft_uitoa(nbr);
	length = ft_lputstr(s);
	free(s);
	return (length);
}
