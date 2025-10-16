.section .vectors
vector_table:
    .word 0xABC0
    .word reset_handler
    .zero 400

    .section .text
    .align 1
    .type reset_handler, %function
reset_handler:
    mov r1, #0x1
    mov r2, #0x2
    add r3, r1, r2
    b swad

swad2:
    sub r4, r1, r2
    b end

swad:
    mov r5, r3
    lsl r6, r5, #2
    b swad2

end:
    bl .