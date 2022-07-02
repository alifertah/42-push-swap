NAME	= push_swap
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror

HEADER	= ./push_swap.h

SRC		= ./src/main.c\
		./src/utils/checker.c\
		./src/utils/checker_2.c\
		./src/utils/split.c\
		./src/utils/lst.c\
		./src/utils/string.c\
		./src/utils/sort.c\
		./src/utils/utils.c\
		./src/utils/free.c\
		./src/sort/sort_two_to_five.c\
		./src/sort/sort_utils.c\
		./src/sort/sort_more.c\
		./src/operations/swap.c\
		./src/operations/rotate.c\
		./src/operations/reverse.c\
		./src/operations/push.c

all: $(NAME)
$(NAME): $(SRC) $(HEADER)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:

fclean:
	$(RM) $(NAME)

re : fclean all

.PHONY: fclean clean all push_swap