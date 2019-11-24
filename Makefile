NAME = netwhat-calc

SRC = srcs/ft_check.c srcs/ft_free.c srcs/ft_split.c srcs/ft_count.c srcs/ft_format.c srcs/ft_subcheck.c srcs/ft_ipcheck.c srcs/ft_cidr.c srcs/ft_subcalc.c

OBJ = ft_check.o ft_free.o ft_split.o ft_count.o ft_format.o ft_subcheck.o ft_ipcheck.o ft_cidr.o ft_subcalc.o

LIB = libnc.a

all: $(NAME)
FLAGS: -Wall -Werror -Wextra

$(NAME): $(SRC) srcs/netwhat_calc.h
	gcc $(FLAGS) -c $(SRC)
	ar rcs $(LIB) $(OBJ)
	gcc $(FLAGS) -o $(NAME) srcs/main.c $(OBJ) -lm -L. -lnc
	rm -f $(OBJ) $(LIB)

clean:
	/bin/rm -f $(OBJ) $(LIB)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
