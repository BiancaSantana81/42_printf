NAME = libftprintf.a

FILES = ft_printf.c ft_printf_flags.c ft_printf_utils.c

FILES_O = $(FILES:.c=.o)

all: $(NAME)

$(NAME) : $(FILES_O)
	ar rcs $(NAME) $(FILES_O)

%.o: %.c
	cc -c $< -o $@ -Wall -Wextra -Werror

clean:
	rm -f $(FILES_O) main.o
	
fclean: clean
	rm -f $(NAME) main

re: fclean all

test: $(FILES_O)
	@cc -c main.c -o main.o -Wall -Wextra -Werror
	@cc -o main main.o ft_printf.o ft_printf_flags.o ft_printf_utils.o
	./main
