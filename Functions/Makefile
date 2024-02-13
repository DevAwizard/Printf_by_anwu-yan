NAME = libftprintf.a
CC = gcc
CFLAG = -Wall -Werror -Wextra
SRC_FILES = ft_printf_utils.c \
			ft_printf.c

LIBC = ar rcs

OBJS = $(SRC_FILES:.c=.o)

%.o: %.c
	$(CC) -c $(CFLAG) $^

all: $(NAME)

$(NAME): $(OBJS)
	$(LIBC) $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re