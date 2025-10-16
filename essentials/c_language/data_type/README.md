### About

C and assembly code to see how variables of different datatype is pushed to the stack, and also their size. Execute "make assembly" to generate the assembly listing and analyze how the compiler allocates stack space for each variable.

Note: Debug info is not being generated in make assembly.

### Makefile targets

To build the project: make compile 

To turn c-asm.c to assembly: make assembly

To print instructions in binary: make printbin

To start qemu: make qemu

To connect gdb: make gdb 

To clean the build directory: make clean


### [Instruction decoder website](https://luplab.gitlab.io/rvcodecjs/)