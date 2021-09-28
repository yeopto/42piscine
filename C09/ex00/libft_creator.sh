# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gunykim <gunykim@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/28 14:21:56 by gunykim           #+#    #+#              #
#    Updated: 2021/09/28 15:25:02 by gunykim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash/
gcc -c -Wall -Wextra -Werror ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
ar rcs libft.a *.o
