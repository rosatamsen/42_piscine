# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: drosa-ta <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/23 12:18:38 by drosa-ta          #+#    #+#              #
#    Updated: 2017/01/24 15:45:46 by drosa-ta         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op
SRCS = main.c ft_atoi.c ft_putchar.c ft_putnbr.c ft_putstr.c

all: $(NAME)

$(NAME):
	@gcc -o $(NAME) -Wall -Werror -Wextra $(SRCS) 

clean:
	@/bin/rm -f

fclean:
	@/bin/rm -f $(NAME)

re: fclean all
