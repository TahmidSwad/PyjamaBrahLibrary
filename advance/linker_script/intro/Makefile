oblect:
	arm-none-eabi-gcc -c main.c
	arm-none-eabi-ld main.o -o main.elf
	arm-none-eabi-objdump -D main.elf > main.elf.s

symbol:
	arm-none-eabi-nm main.elf

clean:
	rm -f *.elf *.o *.elf.s
