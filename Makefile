NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror -g
SRCS = *.c
OBJS = $(SRCS:.c=.o)
INCLUDES = libft.h

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c $(INCLUDES)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
