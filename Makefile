NAME		=	push_swap

CC			=	gcc

CFLAGS		=	-Wall -Wextra -Werror

INCLUDE		=	./include/

SRC_PATH	=	./source/

SRC_SORT	=	sort.c \
				operate.c \
				do_op.c \
				insert.c \
				before_sort.c \

SRC_UTILS	=	find_max.c \
				init.c \
				utils.c \
				free.c \
				check.c \

SRC_LIBFT	=	ft_get_digit_count.c \
				ft_isspace.c \
				ft_strcmp.c \
				ft_isdigit.c \
				ft_split.c \
				ft_strlen.c \
				ft_strchr.c \
				ft_calloc.c \
				ft_strndup.c \
				ft_memset.c \
				ft_strnlen.c \
				ft_strlcpy.c \
				ft_memchr.c \

SRC_PRINT	=	do_print_a.c \
				do_print_b.c \
				do_print_common.c \
				test_print.c \

SRC_STACK	=	node.c \
				stack.c \

SRC_MAIN	=	push_swap.c \

SRCS		=	$(addprefix $(SRC_PATH)push_swap_sort/, $(SRC_SORT)) \
				$(addprefix $(SRC_PATH)push_swap_utils/, $(SRC_UTILS)) \
				$(addprefix $(SRC_PATH)push_swap_print/, $(SRC_PRINT)) \
				$(addprefix $(SRC_PATH)push_swap_stack/, $(SRC_STACK)) \
				$(addprefix $(SRC_PATH)push_swap_libft/, $(SRC_LIBFT)) \
				$(addprefix $(SRC_PATH), $(SRC_MAIN)) \

OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
		@$(CC) $(CFLAGS) -g -o $(NAME) $(OBJS)

clean :
		@/bin/rm -rf $(OBJS)

fclean : clean
		@/bin/rm -rf $(NAME)

re : fclean all

.PHONY: all re clean fclean
