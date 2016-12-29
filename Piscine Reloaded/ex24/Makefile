NAME	= libft.a

HEADER	= ./includes

CFLAGS	= -Wall -Wextra -Werror

OPTION	= -c -I $(HEADER)

SRCS	= ./srcs/ft_putchar.c \
	./srcs/ft_putstr.c \
	./srcs/ft_swap.c \
	./srcs/ft_strcmp.c \
	./srcs/ft_strlen.c

OBJS	= ft_putchar.o ft_putstr.o ft_strlen.o ft_swap.o ft_strcmp.o

RM	= rm -f

all :	$(NAME)

$(NAME) :
	gcc $(OPTION)  $(CFLAGS) $(SRCS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean :	
	rm -rf $(OBJS)

fclean:		clean
	rm -rf $(NAME)

re :	fclean all
