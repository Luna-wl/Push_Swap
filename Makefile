NAME = 	push_swap
BONUS_NAME = checker

M_MAIN = main.c
B_MAIN = checker_bo/bonus_main.c

SRCS = 	init_stack.c error_406.c sarab.c push_stack.c rotate.c \
		new_atoi.c check_stack.c ft_split.c stack_utils.c sort_stack.c quick_sort.c \
		sort_stack_too.c push_back.c

BONUS =	checker_bo/get_next_line.c \
		checker_bo/get_next_line_utils.c \
		checker_bo/bonus_song.c

CC = gcc
CFLAGS = -g -Wall -Werror -Wextra

M_OBJ = $(M_MAIN:.c=.o)
B_OBJ = $(B_MAIN:.c=.o)

OBJS = $(SRCS:.c=.o)
BNOBJ = $(BONUS:.c=.o)

DEL = rm -rf

all: $(NAME)
	
$(NAME): $(OBJS) $(M_OBJ)
	$(CC) $(CFLAGS) $(SRCS) $(M_OBJ) -o $(NAME)

bonus: $(BONUS_NAME)

$(BONUS_NAME): $(BNOBJ) $(OBJS) $(B_OBJ)
	$(CC) $(CFLAGS) $(OBJS) $(BNOBJ) $(B_OBJ) -o $(BONUS_NAME)

clean:
	$(DEL) $(OBJS) $(BNOBJ) $(M_OBJ) $(B_OBJ)

fclean: clean
	# @say -v Kyoko "ちょっと待って、掃除中"
	$(DEL) $(NAME) $(BONUS_NAME)
	# @cat pic/minion.txt
	# @say -v Kyoko "お待たせしました"

re: fclean all

norm:
	# @cat pic/duck.txt
	# @say -v Kanya "ขอตรวจ"
	# @say -v Kyoko "norminetto"
	# @say -v Kanya "หน่อยนะ"
	@echo "---- NORMINETTE ----"
	@norminette -R CheckForbiddenSourceHeader *.c
	@norminette -R CheckDefine *.h
	# @say -v Kanya "ขอบคุณที่รอ"
	@echo "---- THANK YOU ^w^Y ----"

.PHONY: norm bonus clean fclean all re