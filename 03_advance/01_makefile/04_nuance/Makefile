include swad.mk
all: main
	@

run: all
	@./main

main: $(OBJ_FILES)
	$(GCC) $^ -o $@

%.o: %.c
	$(GCC) $(INCLUDE) -c $^ -o $@

clean:
	@rm -f main $(OBJ_FILES)