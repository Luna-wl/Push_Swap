NAME = push_swap
SRCS = push_swap.c init_stack.c error_406.c sarab.c push_stack.c rotate.c \
		new_atoi.c check_stack.c
HEADER = push_swap.h

CC = gcc
CFLAGS = -Wall -Werror -Wextra

OBJS = $(SRCS:.c=.o)

# $BNOBJ = $(BONUS:.c=.o)

LIB = libft/

DEL = rm -rf

all: $(NAME)
	
$(NAME): $(OBJS) 
	@make -C $(LIB)
	$(CC) $(CFLAGS) $(SRCS) -L $(LIB) -lft -o $(NAME)

#bonus: $(OBJS) $(BNOBJ) 
#	$(GCC) $(NAME) $(OBJS) $(BNOBJ)

clean:
	@make clean -C $(LIB)
	$(DEL) $(OBJS)

fclean: clean
	# @say -v Kyoko "ちょっと待って、掃除中"
	$(DEL) $(NAME)
	# @cat pic/minion.txt
	# @say -v Kyoko "お待たせしました"

re: fclean all

norm:
	@cat pic/duck.txt
	@say -v Kanya "ขอตรวจ"
	@say -v Kyoko "norminetto"
	@say -v Kanya "หน่อยนะ"
	@norminette
	@say -v Kanya "ขอบคุณที่รอ"

.PHONY: norm bonus clean fclean all re