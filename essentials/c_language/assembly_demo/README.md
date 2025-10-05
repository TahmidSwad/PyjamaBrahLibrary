Enter the following commands in the terminal

To compile : riscv64-unknown-elf-gcc -O0 -ggdb -nostdlib -march=rv32i -mabi=ilp32 -Wl,-Tm.ld m.s -o main.elf

To start QEMU : qemu-system-riscv32 -S -M virt -nographic -bios none -kernel main.elf -gdb tcp::1234

To start GDB : gdb-multiarch main.elf -ex "target remote localhost:1234" -ex "break _start" -ex "continue" -q

To create bin : riscv64-unknown-elf-objcopy -O binary main.elf main.bin

To print the instruction from bin to terminal : xxd -e -c 4 -g 4 main.bin

[Instruction decoder website](https://luplab.gitlab.io/rvcodecjs/)