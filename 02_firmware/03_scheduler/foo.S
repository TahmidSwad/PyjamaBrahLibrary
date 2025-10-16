# systic configuration registers
.equ systic_csr,   0xE000E010
.equ systic_rvr,   0xE000E014
.equ systic_cvr,   0xE000E018
.equ systic_calib, 0xE000E01c
.equ timout,       0x00ffffff


    .section .vectors
vector_table:
    .word 0x20001000
    .word reset_handler

    .org 0x3C

    .word systic_handler
    .zero 400


    .section .text
    .align 1
    .type reset_handler, %function
reset_handler:
    ldr r0, = systic_csr
    ldr r1, = systic_rvr
    ldr r2, = systic_cvr
    ldr r3, = timout
    
    str r3, [r1]

    mov r3, #0x0
    str r3, [r2]
    
    mov r3, #0x7
    str r3, [r0]
    
    b .


    .section .text
    .align 1
    .type systic_handler, %function
systic_handler:
    push {r4-r7}

    mov r0, r8
    mov r1, r9
    mov r2, r10
    mov r3, r11

    push {r0-r3}

magic:
    nop
    pop {r0-r3}

    mov r8, r0
    mov r9, r1
    mov r10, r2
    mov r11, r3

    pop {r4-r7}

    bx lr

# Task

    .section .text
    .p2align 4
    .global main1
    .type main1, %function
main1:
    nop
    add r0, r0, #1
    b main1

    .section .text
    .p2align 4
    .global main2
    .type main2, %function
main2:
    nop
    add r1, r1, #2
    b main2

    .section .text
    .p2align 4
    .global main3
    .type main3, %function
main3:
    nop
    add r2, r2, #3
    b main3


    .data
    .align 4
stack_1:
    .word 0x18
    .word 0x19
    .word 0x1a
    .word 0x1b
    .word 0x14
    .word 0x15
    .word 0x16
    .word 0x17
    .word 0x10
    .word 0x11
    .word 0x12
    .word 0x13
    .word 0x1c
    .word 0x309
    .word main1
    .word 0x01000000
    .zero 64
    .align 4

stack_2:
    .word 0x28
    .word 0x29
    .word 0x2a
    .word 0x2b
    .word 0x24
    .word 0x25
    .word 0x26
    .word 0x27
    .word 0x20
    .word 0x21
    .word 0x22
    .word 0x23
    .word 0x2c
    .word 0x309
    .word main2
    .word 0x01000000
    .zero 64
    .align 4

stack_3:
    .word 0x38
    .word 0x39
    .word 0x3a
    .word 0x3b
    .word 0x34
    .word 0x35
    .word 0x36
    .word 0x37
    .word 0x30
    .word 0x31
    .word 0x32
    .word 0x33
    .word 0x3c
    .word 0x309
    .word main3
    .word 0x01000000
    .zero 64
    .align 4



