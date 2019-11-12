NAME = check_mate
SRCS = check_mate.c helpers.c
HDR = -L.
FLAGS = -Wall -Werror -Wextra
INPUT1 = 'R...' '.K..' '..P.' '....'
INPUT2 = 'R...' 'iheK' '....' 'jeiR'
INPUT3 = '......' '......' '..K...' 'P.B.R.' '..Q...' '......'

all: $(NAME)

$(NAME):
	@gcc -o $(NAME) $(SRCS) $(HDR)
	@./$(NAME) $(INPUT3) | cat -e

debug:
	gcc -o $(NAME) $(SRCS) $(HDR) -g
	lldb $(NAME) -- $(INPUT3)

clean:
	@rm -f $(NAME)

re: clean all

