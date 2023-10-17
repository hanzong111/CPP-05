# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ojing-ha <ojing-ha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/14 20:26:19 by ojing-ha          #+#    #+#              #
#    Updated: 2023/10/11 16:16:46 by ojing-ha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

DEF_COLOR     = \033[0;39m
GRAY         = \033[0;90m
RED         = \033[0;91m
GREEN         = \033[0;92m
YELLOW         = \033[0;93m
BLUE         = \033[0;94m
MAGENTA     = \033[0;95m
CYAN         = \033[0;96m
WHITE         = \033[0;97m

NAME		= bureaucat

CC			= c++

SRCS_DIR	= srcs/
OBJS_DIR	= objs/

CFLAGS	= -Wall -Werror -Wextra
cFLAGS	+= -std=c++98

SRC_FILES	= main\
				Bureaucrat\
				Form\
				

SRCS	= $(addprefix $(SRCS_DIR), $(addsuffix .cpp, $(SRC_FILES)))
OBJS	= $(addprefix $(OBJS_DIR), $(addsuffix .o, $(SRC_FILES)))

all		:
		@mkdir -p $(OBJS_DIR)
		@echo "$(MAGENTA) --------------------------INSIDE BUREAUCRAT-------------------------- $(CYAN)"
		@echo "\n"
		@make $(NAME)
		@echo "$(YELLOW)Done Creating ./bureaucat$(DEF_COLOR)"
		@echo "\n"
		@echo "$(GREEN) -------------$(RED)I $(CYAN)AM $(GREEN)DONE $(YELLOW)MADAFAKA$(GREEN)-------------------------- $(DEF_COLOR)"

$(NAME)	: ${OBJS}
		@${CC} ${CFLAGS} ${OBJS} -o ${NAME}
		@echo "$(GREEN)Creating ./phonebook ...$(DEF_COLOR)"

${OBJS_DIR}%.o:	$(SRCS_DIR)%.cpp
		@$(CC) $(CFLAGS) -c $^ -o $@
		@echo "$(GREEN)Compiling $<...$(DEF_COLOR)"


clean	:
		@echo "$(MAGENTA) --------------------------REMOVING objs/-------------------------- $(CYAN)"
		@echo "\n"
		@rm -rf $(OBJS_DIR)
		@echo "$(RED)Object Files Deleted$(DEF_COLOR)"
		@echo "\n"
		@echo "$(GREEN) --------------------------DONE--------------------------$(DEF_COLOR)"

fclean	:	clean
		@echo "$(MAGENTA) --------------------------REMOVING ./phonebook-------------------------- $(CYAN)"
		@echo "\n"
		@rm -f $(NAME)
		@echo "$(RED)./phonebook Deleted$(DEF_COLOR)"
		@echo "\n"
		@echo "$(GREEN) --------------------------DONE--------------------------$(DEF_COLOR)"

re		:fclean all

.PHONY	:all clean fclean re