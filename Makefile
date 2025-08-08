NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror

PRINTFD = ./ft_printf
PRINTF = $(PRINTFD)/libftprintf.a

LIBFTD = ./libft
LIBFT = $(LIBFTD)/libft.a

SRCD = ./src
SRC = $(SRCD)/push_swap.a

RULESD = ./rules
RULES = $(RULESD)/rules.a

TURKD = ./turk_algorithm
TURK = $(TURKD)/turk.a

SRCS = main.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) $(PRINTF) $(LIBFT) $(RULES) $(TURK) $(SRC)
	$(CC) $(CFLAGS) $(OBJS) $(SRC) $(TURK) $(RULES) $(PRINTF) $(LIBFT) -o $(NAME)

$(PRINTF):
	make -C $(PRINTFD) all

$(LIBFT):
	make -C $(LIBFTD) all

$(SRC):
	make -C $(SRCD) all

$(RULES):
	make -C $(RULESD) all

$(TURK):
	make -C $(TURKD) all

clean:
	make -C $(PRINTFD) clean
	make -C $(LIBFTD) clean
	make -C $(SRCD) clean
	make -C $(RULESD) clean
	make -C $(TURKD) clean
	rm -f $(OBJS)

fclean: clean
	make -C $(PRINTFD) fclean
	make -C $(LIBFTD) fclean
	make -C $(SRCD) fclean
	make -C $(RULESD) fclean
	make -C $(TURKD) fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re 