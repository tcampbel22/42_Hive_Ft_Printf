NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror


SRCS = ft_putstr_count.c str_handler.c ft_putchar_count.c ft_putnbr_count.c ft_printf.c ft_puthex_count.c


OBJS = $(SRCS:.c=.o)

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o : %.c
	cc $(CFLAGS) -c $< -o $@

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re
