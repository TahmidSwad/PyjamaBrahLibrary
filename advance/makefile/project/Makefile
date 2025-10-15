SRC = $(shell find -iname "*.c")
OBJ_FILES = $(patsubst %.c, %.o, $(SRC))
#INCLUDE = -I./include/magic -I./include/magic2
INCLUDE = $(shell find -iname "*.h" -exec dirname {} \; | sed 's/^./-I./g' | xargs)

# $(info $(SRC) $(OBJ_FILES) $(INCLUDE))

all: main
	@

run: all
	@./main
#	./$< (worked before because dependence was main before bur now its all)

main: $(OBJ_FILES)
	gcc $^ -o $@

%.o: %.c
#	gcc -I./include/magic -I./include/magic2 -c $^ -o $@
	gcc $(INCLUDE) -c $^ -o $@

clean:
	@rm -f main $(OBJ_FILES)