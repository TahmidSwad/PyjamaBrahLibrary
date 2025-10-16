GCC     = arm-none-eabi-gcc
LD      = arm-none-eabi-ld
READELF = arm-none-eabi-readelf

TARGET = main

LD_SCRIPT   = $(TARGET).ld
LD_MAP      = $(TARGET).map
READELF_OUT = $(TARGET).txt

OBJ = main.o global.o

all: $(READELF_OUT)
	@

$(READELF_OUT): $(TARGET).elf
	$(READELF) -a $^ > $@

main.elf: $(OBJ) $(LD_SCRIPT)
	$(LD) -T$(LD_SCRIPT) -Map=$(LD_MAP) -o $@ $(OBJ)

%.o: %.c
	$(GCC) -Wall -nostdlib -fno-builtin -ffreestanding -c $<

clean:
	rm -f *.o *.elf *.txt *.map *.log
