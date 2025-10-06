# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dievarga <dievarga@student.42barcelona.co  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/05 12:31:55 by dievarga          #+#    #+#              #
#    Updated: 2025/10/05 13:00:42 by dievarga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = libft.a
SRC     = *.c

all:
	@cc -Wall -Wextra -Werror -o $(NAME) $(SRC)

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)
re:
	fclean all

.PHONY: all clean fclean re
