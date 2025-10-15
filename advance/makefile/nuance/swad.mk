define print_SRC
	$(info SRC = $(SRC))
endef

# CMD_VAR =
# CMD_VAR ?= 1
# $(info value of CMD_VAR: $(CMD_VAR))
GCC ?= gcc    # make -n GCC=arm-none-eabi-gcc

$(info gcc == $(GCC))

SRC = $(shell find -iname "*.c")
$(print_SRC)
# $(info SRC = $(SRC))
SRC += swad.c
$(print_SRC)
# $(info SRC = $(SRC))


OBJ_FILES = $(patsubst %.c, %.o, $(SRC))
INCLUDE = $(shell find -iname "*.h" -exec dirname {} \; | sed 's/^./-I./g' | xargs)


