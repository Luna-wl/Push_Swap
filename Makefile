NAME = 	push_swap
SRCS = 	push_swap.c init_stack.c error_406.c sarab.c push_stack.c rotate.c \
		new_atoi.c check_stack.c ft_split.c stack_utils.c sort_stack.c

CC = gcc
CFLAGS = -Wall -Werror -Wextra

OBJS = $(SRCS:.c=.o)

# $BNOBJ = $(BONUS:.c=.o)

DEL = rm -rf

all: $(NAME)
	
$(NAME): $(OBJS) 
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

#bonus: $(OBJS) $(BNOBJ) 
#	$(GCC) $(NAME) $(OBJS) $(BNOBJ)

clean:
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