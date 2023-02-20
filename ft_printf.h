#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdint.h>

int     ft_printf(const char *, ...);
int     ft_lputstr(char *str);
int     ft_lputnbr(int nbr);
int     ft_lputunbr(int nbr);
char    *ft_uitoa(unsigned int nb);
void    ldectohex(unsigned long int n);
void    dectohex(unsigned long int n);
void    ft_putchar (char c);
void    ft_putnbr(int n);
int		ft_size_p(uintptr_t p);
int		ft_print_p(uintptr_t p);
int		ft_size_hex(unsigned int num);
int	    ft_print_hex(unsigned int num);
int	    ft_lprint_hex(unsigned int num);
int	    ft_lsize_hex(unsigned int num);
int	    ft_find_size(long nb);
int	    ft_fputstr(char *str);
int	    ft_fputunbr(unsigned int nbr);
int		ft_fputnbr(int nbr);



#endif
