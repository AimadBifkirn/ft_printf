NAME = libftprintf.a

CFLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c  ft_putchar.c  ft_putnbr.c  ft_putstr.c  print_param.c \
	putnbr_hlower.c  putnbr_hupper.c  putptr_hex.c  putunsigned.c

OBj = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBj)
	ar rcs $@ $^

clean :
	rm -f $(OBj)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re