SRCS			= ft_printf.c ldectohex.c dectohex.c ft_printf_str.c ft_printf_uitoa.c ft_printf_utils.c ft_vptr.c ft_x_extra.c

OBJS			= $(SRCS:.c=.o)

CC				= gcc

RM				= rm -f

CFLAGS			= -Wall -Wextra -Werror -g

NAME			= libftprintf.a

all:			$(NAME)

$(NAME):		$(OBJS)
				$(AR) rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re
