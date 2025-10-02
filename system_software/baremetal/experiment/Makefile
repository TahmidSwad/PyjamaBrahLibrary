img:
	@aarch64-linux-gnu-gcc -Wall -nostdlib -nostartfiles -ffreestanding -g -c start.S -o start.o
	@aarch64-linux-gnu-ld -g -m aarch64elf -nostdlib -T linker.ld start.o -o kernel8.elf
	@aarch64-linux-gnu-objcopy kernel8.elf -O binary kernel8.img
	@aarch64-linux-gnu-objdump -D -S kernel8.elf > kernel8.elf.lst
	@echo "generated kernel8.img"

clean:
	@rm -f *.o *.img *.elf *.lst