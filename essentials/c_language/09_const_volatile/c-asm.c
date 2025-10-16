int swad(){
    // int a = 10;
    // a = a + 1;
    // a = a + 10;
    // return a;
    
    volatile int b = 20;
    b = b + 1;
    b = b + 10;
    return b;
}


// const variable example
// int swad(){
//     const a = 10;
//     a = 20; // This will cause a compilation error
//     return 0;
// }
