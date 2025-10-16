void swad(){
    int i = 3;
    int j = 2;

    switch (i){
        case 1:
            j = j + 1;
            break;
        case 2:
            j = j + 2;
            break;
        case 3:
            j = j + 3;
            break;
        default:
            j = j + 100;
    }
    return;
}
