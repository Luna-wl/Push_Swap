NAME = pushswap.a
SRCS = 	push_swap.c convert_n.c init_stack.c


GCC = gcc -Wall -Werror -Wextra

OBJS = $(SRCS:.c=.o)

BNOBJ = $(BONUS:.c=.o)

LIB = ar -crs

DEL = rm -rf

norm:
	@cat duck.txt
	@say -v Kanya "ขอตรวจ"
	@say -v Kyoko "norminetto"
	@say -v Kanya "หน่อยนะ"
	@norminette $(SRCS)

%o: %c 
	$(GCC) -c $< -o $@ 

all: $(NAME)
	
$(NAME): $(OBJS)
	$(LIB) $(NAME) $(OBJS)

bonus: $(OBJS) $(BNOBJ) 
	$(LIB) $(NAME) $(OBJS) $(BNOBJ)

clean:
	$(DEL) $(OBJS) $(BNOBJ)

fclean: clean
	$(DEL) $(NAME) 

re: fclean all

.PHONY: norm bonus clean fclean all re