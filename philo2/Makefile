# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ryoshio- <ryoshio-@student.42sp.org.br     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/01 21:29:36 by ryoshio-          #+#    #+#              #
#    Updated: 2022/12/05 11:49:19 by ryoshio-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = philo

SRC = main.c ft_check_arg.c ft_argv_to_data.c \
	ft_atoi.c ft_time_epoch_in_ms.c ft_philosopher.c\
	ft_free_data.c ft_think.c ft_take_fork.c ft_test.c\
	ft_eat.c ft_put_fork.c

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