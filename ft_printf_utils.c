#include "./libft/libft.h"
#include "ft_printf.h"

int	ft_fputstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (write(1, "(null)", 6));
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	ft_fputnbr(int nbr)
{
	char	*n;
	int		len;

	n = ft_itoa(nbr);
	len = ft_fputstr(n);
	free(n);
	return (len);
}

int	ft_fputunbr(unsigned int nbr)
{
	char	*n;
	int		len;

	n = ft_utoa(nbr);
	len = ft_fputstr(n);
	free(n);
	return (len);
}
