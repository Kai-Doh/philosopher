# Colors
RESET = \033[0m
GREEN = \033[32m
BLUE = \033[34m
YELLOW = \033[33m
RED = \033[31m

# Executables
PHILO = philo

# Compiler and Flags
CC = gcc
CFLAGS = -Werror -Wall -Wextra -g -I.

# Source Files
SRCS =	philosopher.c\
		tools.c\
		checker.c\
		parsing.c\
		init.c\
		handling.c

# Object Files (automatically generated from SRCS)
OBJS = $(SRCS:.c=.o)

# Commands
RM = rm -rf

# Targets
all: $(PHILO)


%.o: %.c
	@echo "$$(echo -e '$(BLUE)Compiling $<...$(RESET)')"
	@$(CC) $(CFLAGS) -c $< -o $@


$(PHILO): $(OBJS)
	@echo "$$(echo -e '$(BLUE)Linking $(PHILO)...$(RESET)')"
	@$(CC) $(CFLAGS) $(OBJS) -o $(PHILO)
	@echo "$$(echo -e '$(GREEN)✔ $(PHILO) executable created.$(RESET)')"


clean:
	@echo "$$(echo -e '$(RED)Cleaning object files...$(RESET)')"
	@$(RM) $(OBJS)
	@echo "$$(echo -e '$(GREEN)✔ Object files removed.$(RESET)')"


fclean: clean
	@echo "$$(echo -e '$(RED)Removing $(PHILO)...$(RESET)')"
	@$(RM) $(PHILO)
	@echo "$$(echo -e '$(GREEN)✔ $(PHILO) removed.$(RESET)')"
	@echo "$$(echo -e '$(GREEN)✔ Full clean complete.$(RESET)')"


re: fclean all

.PHONY: all clean fclean re
