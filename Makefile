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

SRCS = main.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) $(PRINTF) $(LIBFT) $(RULES) $(SRC)
	$(CC) $(CFLAGS) $(OBJS) $(SRC) $(RULES) $(PRINTF) $(LIBFT) -o $(NAME)

$(PRINTF):
	make -C $(PRINTFD) all

$(LIBFT):
	make -C $(LIBFTD) all

$(SRC):
	make -C $(SRCD) all

$(RULES):
	make -C $(RULESD) all

clean:
	make -C $(PRINTFD) clean
	make -C $(LIBFTD) clean
	make -C $(SRCD) clean
	make -C $(RULESD) clean
	rm -f $(OBJS)

fclean: clean
	make -C $(PRINTFD) fclean
	make -C $(LIBFTD) fclean
	make -C $(SRCD) fclean
	make -C $(RULESD) fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re 