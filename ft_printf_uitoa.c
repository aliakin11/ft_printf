#include "./libft/libft.h"
#include "ft_printf.h"

int	ft_find_size(long nb)
{
	int	len;

	len = 0;
	while (nb != 0)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

char	*ft_uitoa(unsigned int nb)
{
	char	*str;
	long	nbr;
	int		size;

	nbr = nb;
	size = ft_find_size(nbr);
	if (nbr == 0)
		return (ft_strdup("0"));
	str = (char *) malloc(size + 1);
	if (str == NULL)
		return (NULL);
	str[size] = '\0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr *= -1;
	}
	while (nbr != 0)
	{
		str[size - 1] = 48 + (nbr % 10);
		nbr /= 10;
		size--;
	}
	return (str);
}
