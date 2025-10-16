MEMORY {
    SOME_NAME : ORIGIN = 0x4000 , LENGTH = 0x1000 
}

SECTIONS {
    .text : {
        /* main.o (.text)*/
        /*global.o (.text)*/
    *(.text)
    } > SOME_NAME

    rodata : {
        /*main.o (.rodata)*/
        /*global.o (.roata)*/
        *(.rodata)
    } > SOME_NAME


    .data : {
        /*main.o (.data)*/
        /*global.o (.data)*/
        *(.data)
    } > SOME_NAME

    .bss : {
        /*main.o (.bss)*/
        /*global.o (.bss)*/
        *(.bss)
    } > SOME_NAME

    /DISCARD/ : {
        /*main.o (*)*/
        /*global.o (*)*/
        *(*)
    }
}