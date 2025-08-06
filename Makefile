NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror

PRINTFD = ./ft_printf
PRINTF = $(PRINTFD)/libftprintf.a

LIBFTD = ./libft
LIBFT = $(LIBFTD)/libft.a

SRCD = ./src
SRC = $(SRCD)/push_swap.a

SRCS = main.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) $(PRINTF) $(LIBFT) $(SRC)
	$(CC) $(CFLAGS) $(OBJS) $(SRC) $(PRINTF) $(LIBFT) -o $(NAME)

$(PRINTF):
	make -C $(PRINTFD) all

$(LIBFT):
	make -C $(LIBFTD) all

$(SRC):
	make -C $(SRCD) all

clean:
	make -C $(PRINTFD) clean
	make -C $(LIBFTD) clean
	make -C $(SRCD) clean
	rm -f $(OBJS)

fclean: clean
	make -C $(PRINTFD) fclean
	make -C $(LIBFTD) fclean
	make -C $(SRCD) fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re 