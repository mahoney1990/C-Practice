#include <stdio.h>

int main(void){
//Define structure
    struct date{
        int month;
        int  day;
        int year;
    };

// Assign variable today to have date structure

struct date today;

today.month=6;
today.day=15;
today.year=2022;

printf("Today's date is %i/%i/%i \n",today.month,today.day,today.year);

return 0; 

}


