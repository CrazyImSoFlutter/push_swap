NAME = push_swap

CC = gcc

CFLAGS = -O3 -Wall -Wextra -Werror -I.

HEADER = push_swap.h

SRCS = push_swap.c\
	   utils.c\
	   stack.c\
	   node.c\
	   operate.c\
	   correction.c\
	   do_print_a.c\
	   do_print_b.c\
	   do_print_common.c\
	   before_sort.c\
	   free.c\
	   test_print.c\

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME) : $(OBJS)
			$(CC) $(CFLAGS) -g -o $(NAME) $(OBJS)

clean:
		rm -rf $(OBJS)

fclean: clean
			rm -rf $(NAME)
