NAME = push_swap
NAME_BONUS = checker

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

CHECKER = ./checker_push/checker.a

GNL = ./get_next_line/gnl.a

SRCS = main.c
BSRCS = ./checker_push/checker.c

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

$(GNL):
	make -C $(dir $(GNL)) all

$(CHECKER):
	make -C $(dir $(CHECKER)) all

$(NAME_BONUS): $(CHECKER) $(GNL) $(TURK) $(SRC) $(RULES) $(PRINTF) $(LIBFT)
	$(CC) $(CFLAGS) $(CHECKER) $(GNL) $(TURK) $(SRC) $(RULES) $(PRINTF) $(LIBFT) -o $(NAME_BONUS)

bonus: $(NAME_BONUS)

clean:
	make -C $(PRINTFD) clean
	make -C $(LIBFTD) clean
	make -C $(SRCD) clean
	make -C $(RULESD) clean
	make -C $(TURKD) clean
	make -C $(dir $(GNL)) clean
	make -C $(dir $(CHECKER)) clean
	rm -f $(OBJS)

fclean: clean
	make -C $(PRINTFD) fclean
	make -C $(LIBFTD) fclean
	make -C $(SRCD) fclean
	make -C $(RULESD) fclean
	make -C $(TURKD) fclean
	make -C $(dir $(GNL)) fclean
	make -C $(dir $(CHECKER)) fclean
	rm -f $(NAME)
	rm -f $(NAME_BONUS)

re: fclean all

.PHONY: all clean fclean re bonus