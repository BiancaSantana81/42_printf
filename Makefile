NAME = libftprintf.a

FILES = ft_printf.c ft_printf_flags.c ft_printf_utils.c

FILES_O = $(FILES:.c=.o)

all: $(NAME)

$(NAME) : $(FILES_O)
	ar rcs $(NAME) $(FILES_O)

%.o: %.c
	cc -c $< -o $@ -Wall -Wextra -Werror

clean:
	rm -f $(FILES_O)
	
fclean: clean
	rm -f $(NAME)

re: fclean all