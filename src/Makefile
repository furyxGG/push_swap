NAME		=		push_swap.a

CC			=		cc
CFLAGS		=	-Wall -Werror -Wextra

SRCS 		=	check_argums.c \
				create_stacks.c \
				index_stacks.c \
				sort_small.c \
				sort.c

OBJS		=	$(SRCS:.c=.o)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all fclean clean re
