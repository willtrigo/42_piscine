NAME = rush-02

SRC = ft_atoi.c ft_data.c ft_compare.c ft_look_for.c ft_str.c rush-02.c

all : ${NAME}

${NAME} :
	cc -Wall -Werror -Wextra -o ${NAME} ${SRC}

clean:
	rm -f *.o

fclean:
	rm -f ${NAME}

re: fclean all ${NAME}