# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sait-ben <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/16 13:59:20 by sait-ben          #+#    #+#              #
#    Updated: 2016/11/16 19:42:58 by sait-ben         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC	= ft_display_file.c ft_putstr.c

OBJ	= ft_display_file.o ft_putstr.o

CFLAGS = -Wall -Wextra -Werror

OPTION = -c

all :	$(NAME)

$(NAME) :
		gcc $(OPTION) $(CFLAGS) $(SRC)
		gcc -o $(NAME) $(OBJ)

clean :
		rm -rf $(OBJ)

fclean :	clean
		rm -rf $(NAME)

re :	fclean all
