# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aerrfig <aerrfig@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/05 15:42:11 by aerrfig           #+#    #+#              #
#    Updated: 2025/01/08 18:23:45 by aerrfig          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

name = ClapTrap
FLAGS = -Wall -Wextra -Werror -std=c++98
CP = c++
srcs = ClapTrap.cpp main.cpp ScavTrap.cpp
heads = ClapTrap.hpp ScavTrap.hpp
objs = ${srcs:.cpp=.o}
RM = rm -f

all: $(name)

%.o: %.cpp $(heads)
	$(CP) $(FLAGS) -c $< -o $@

$(name): $(objs)
	$(CP) $(FLAGS) $(objs) -o $(name)

clean:
	$(RM) $(objs)

fclean: clean
	$(RM) $(name)

re: fclean all