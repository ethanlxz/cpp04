
NAME = Animal

CC = c++
CFLAGS = -Wall -Wextra -Werror -fsanitize=address -std=c++98


OBJS = obj/Main.o \
	obj/Animal.o \
	obj/Cat.o \
	obj/Dog.o \
	obj/Brain.o \


all: $(NAME)

re: fclean all

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME) $(CFLAGS)

obj:
	mkdir obj

obj/%.o: %.cpp | obj
	$(CC) -c $< -o $@ $(CFLAGS)

clean:
	rm -rf obj

fclean: clean
	rm -f $(NAME)

.PHONY: all re clean fclean
