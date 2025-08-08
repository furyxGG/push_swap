SRCS = \
	ft_bzero.c \
	ft_isdigit.c \
	ft_strlen.c \
	ft_atoi.c \
	ft_calloc.c \
	ft_strjoin.c \
	ft_split.c \
	ft_lstnew.c \
	ft_lstadd_front.c \
	ft_lstsize.c \
	ft_lstlast.c \
	ft_lstadd_back.c \
	ft_strchr.c \
	ft_substr.c


OBJS = $(SRCS:.c=.o)

NAME = libft.a
CFLAGS = -Wall -Werror -Wextra
CC = cc
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

clean:
	rm -f $(OBJS)

.PHONY: all clean fclean re
