NAME			=	phonebook

CC				=	g++
CFLAGS			=	-Wall -Werror -Wextra -std=c++98
RM				=	rm -f

SRC				=	main.cpp \
					phonebook.cpp \
					contact.cpp

OBJS			=	$(SRC:.cpp=.o)


.cpp.o:
				@$(CC) $(CFLAGS) -c $< -o $@

all:			$(NAME)

$(NAME):		$(OBJS)
				@$(CC) $(FLAGS) $(OBJS) -o $(NAME)
				@echo "\n$(CYELLOW)$(NAME) $(PURPLE)-> $(CGREEN) compiled$(CRESET)"

clean:
				@$(RM) $(OBJS)
				@echo "${CYELLOW}${NAME} $(PURPLE)-> ${CRED} objects files were deleted.${CRESET}"

fclean:			clean
				@$(RM) $(NAME)
				@echo "${CYELLOW}${NAME} $(PURPLE)-> ${CRED} was deleted.${CRESET}"

re:				fclean all

.PHONY:			all clean fclean re

#		COLORS		#
CYELLOW			=\033[1;33m
CGREEN			=\033[0;32m
CRED			=\033[0;91m
PURPLE			=\033[0;35m
CRESET			=\033[0m