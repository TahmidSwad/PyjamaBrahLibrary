.section .vectors
vector_table:
    .word 0x20001000
    .word reset_handler
    .zero 400

    .section .text
    .align 1
    .type reset_handler, %function
reset_handler:
    mov r1, #0x1
    mov r2, #0x2
    
    push {r1, r2}

    mov r1, #3
    mov r2, #3

    pop {r2, r1}

    b .