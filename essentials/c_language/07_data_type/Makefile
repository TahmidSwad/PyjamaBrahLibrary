compile: m.s c-asm.c m.ld
	riscv64-unknown-elf-gcc -O0 -ggdb -nostdlib -march=rv32i -mabi=ilp32 -Wl,-Tm.ld m.s c-asm.c -o main.elf
	riscv64-unknown-elf-objcopy -O binary main.elf main.bin

assembly: c-asm.c
	riscv64-unknown-elf-gcc -O0 -nostdlib -march=rv32i -mabi=ilp32 -Wl,-Tm.ld c-asm.c -S

printbin: main.bin
	xxd -e -c 4 -g 4 main.bin

qemu: main.elf
	qemu-system-riscv32 -S -M virt -nographic -bios none -kernel main.elf -gdb tcp::1234

gdb: main.elf
	gdb-multiarch main.elf -ex "target remote localhost:1234" -ex "break _start" -ex "continue" -q

clean:
	rm -rf *.elf *.bin c-asm.s
	
distclean:
	rm -rf*.gdb_history
