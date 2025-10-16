#include <stdio.h>

// enum weekday_e{
//     saturday,
//     sunday,
//     monday, 
//     tuesday,
//     wednesday,
//     thursday,
//     friday
// };

enum weekday_e{
    saturday= -2,
    sunday,
    monday, 
    tuesday = 5,
    wednesday,
    thursday,
    friday
};

int main(){
    enum weekday_e day;
    day = friday;
    printf("day: %d\n", day);
    return 0;
}