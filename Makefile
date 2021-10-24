NAME	=	libft.a
RUNNER	=	runner

CC		=	gcc
CFLAGS	=	-Wall# -Werror -Wextra

S		=	$(wildcard *.c)
O		=	$(S:.c=.o)
H		=	libft.h

RM		=	rm -rf

.PHONY:	all clean fclean re

all: $(NAME)

$(NAME): $(O)
	ar rcs $(NAME) $(O)

# needs to have 'int main()' to be functional
runner: $(O) $(BONUS_O)
	@$(CC) $(CFLAGS) -o $(RUNNER) $(O) $(BONUS_O)

%.o: %.c $(H)
	@$(CC) $(CFLAGS) -c $< -o $(addsuffix .o, $(basename $<))

clean:
	@$(RM) $(O) $(BONUS_O)

fclean: clean
	@$(RM) $(NAME)

re: fclean all
