# SRC = main.c msg.c
SRC = $(shell find -iname "*.c")
# OBJ_FILES = main.o msg.o
# OBJ_FILES = $(SRC:%.c=%.o)
OBJ_FILES = $(patsubst %.c, %.o, $(SRC))

$(info $(SRC) $(OBJ_FILES))

# main.o: main.c 
%.o: %.c
#	gcc -c main.c
	gcc -c $^

# msg.o: msg.c
#	gcc -c msg.c


# main: main.o msg.o
main: $(OBJ_FILES)
#	gcc main.o msg.o -o main
	gcc $^ -o $@

run: main
#	./main	
	./$<

clean:
#	rm -f main main.o msg.o
	rm -f main $(OBJ_FILES)