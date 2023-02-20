#include "ft_printf.h"
int	ft_definer(const char ch, va_list args)
{
	int		length;
	char	newch;

	length = 0;
	if (ch == 'c')
	{
		newch = va_arg(args, int);
		length += write(1, &newch, 1);
	}
	else if (ch == 's')
		length += ft_lputstr(va_arg(args, char *));
	else if (ch == 'p')
		length += ft_print_p(va_arg(args, uintptr_t));
	else if (ch == 'd' || ch == 'i')
		length += ft_fputnbr(va_arg(args, int));
	else if (ch == 'u')
		length += ft_fputunbr(va_arg(args, unsigned int));
	else if (ch == 'x')
		length += ft_lprint_hex(va_arg(args, unsigned int), ch);
    else if (ch == 'X')
        length += ft_print_hex(va_arg(args, unsigned int), ch);
	else if (ch == '%')
		length += write(1, "%", 1);
	return (length);
}

int	ft_printf(const char *str, ...)
{
	size_t		i;
	size_t		len;
	va_list		args;

	va_start(args, str);
	i = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			len += ft_definer(str[i], args);
		}
		else
			len += write(1, &str[i], 1);
		i++;
	}
	va_end(args);
	return (len);
}


