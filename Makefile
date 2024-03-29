NAME = netwhat-calc

SRC = srcs/ft_check.c srcs/ft_free.c srcs/ft_split.c srcs/ft_count.c \
	  srcs/ft_format.c srcs/ft_subcheck.c srcs/ft_ipcheck.c srcs/ft_cidr.c \
	  srcs/ft_subcalc.c srcs/ft_submask.c srcs/ft_ip.c srcs/ft_ispublic.c \
	  srcs/ft_ipcidr.c srcs/ft_btoi.c srcs/ft_itob.c srcs/ft_net.c

OBJ = ft_check.o ft_free.o ft_split.o ft_count.o ft_format.o ft_subcheck.o \
	  ft_ipcheck.o ft_cidr.o ft_subcalc.o ft_submask.o ft_ip.o ft_ispublic.o \
	  ft_ipcidr.o ft_btoi.o ft_itob.o ft_net.o

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
