NAME = push_swap
SRCS = push_swap.c init_stack.c error_404.c
HEADER = push_swap.h

CC = gcc
CFLAGS = -Wall -Werror -Wextra

OBJS = $(SRCS:.c=.o)

$BNOBJ = $(BONUS:.c=.o)

LIB = libft/

DEL = rm -rf

all: $(NAME)
	
$(NAME): $(OBJS) 
	make -C $(LIB)
	$(CC) $(CFLAGS) $(SRCS) -L $(LIB) -lft -o $(NAME)

#bonus: $(OBJS) $(BNOBJ) 
#	$(GCC) $(NAME) $(OBJS) $(BNOBJ)

clean:
	@make clean -C $(LIB)
	$(DEL) $(OBJS)

fclean: clean
	$(DEL) $(NAME)

re: fclean all

norm:
	@cat duck.txt
	@say -v Kanya "ขอตรวจ"
	@say -v Kyoko "norminetto"
	@say -v Kanya "หน่อยนะ"
	@norminette $(SRCS) $(HEADER)

.PHONY: norm bonus clean fclean all re