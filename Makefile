# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ryoshio- <ryoshio-@student.42sp.org.br     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/01 21:29:36 by ryoshio-          #+#    #+#              #
#    Updated: 2022/12/02 20:44:01 by ryoshio-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = philo

SRC = main.c ft_check_arg.c ft_initialize_data.c \
	ft_atoi.c ft_time_epoch_in_ms.c ft_philosopher.c\
	ft_free_data.c

CC = gcc

CFLAG = -Wall -Wextra -Werror

OBJS =  ${SRC:.c=.o}

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAG) $(SRC) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re 