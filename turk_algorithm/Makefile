NAME		=		turk.a

CC			=		cc
CFLAGS		=	-Wall -Werror -Wextra

SRCS 		=	turk.c \
				calc_cost.c \
				helper.c \
				move_cheap.c \
				rotate.c

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
