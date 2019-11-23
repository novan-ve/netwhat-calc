NAME = netwhat-calc

SRC = srcs/ft_check.c

OBJ = ft_check.o

LIB = libnc.a

all: $(NAME)
FLAGS: -Wall -Werror -Wextra

$(NAME): $(SRC) srcs/netwhat_calc.h
	gcc $(FLAGS) -c $(SRC)
	ar rcs $(LIB) $(OBJ)
	gcc $(FLAGS) -o $(NAME) srcs/main.c $(OBJ) -L. -lnc
	rm -f $(OBJ) $(LIB)

clean:
	/bin/rm -f $(OBJ) $(LIB)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
