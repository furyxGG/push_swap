NAME		=	checker.a

CC			=	cc
CFLAGS		=	-Wall -Werror -Wextra -I ../ft_printf -I ../libft -I ../rules -I ../src -I ../turk_algorithm -I ../get_next_line

SRCS 		=	checker.c \
				helper.c

OBJS		=	$(SRCS:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all fclean clean re
