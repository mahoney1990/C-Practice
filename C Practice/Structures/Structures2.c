#include <stdio.h>

int main(void){
//Define structure
    struct date{
        int month;
        int  day;
        int year;
    };

struct date today, tomorrow;

today.month=12;
today.day=31;
today.year=2022;

int end_days[12]={31,28,31,30,31,30,31,31,30,31,30,31};



if(end_days[today.month-1]==today.day){
    if(today.month!=12){
    tomorrow.day=1;
    tomorrow.month=today.month+1;
    tomorrow.year=today.year;}
    else if(today.month==12){
    tomorrow.day=1;
    tomorrow.month=1;
    tomorrow.year=today.year+1;}
    }
else{
tomorrow.day=today.day+1;
tomorrow.month=today.month;
tomorrow.year=today.year;
}

printf("Tomorrow's date: %i/%i/%i \n",tomorrow.month,tomorrow.day,tomorrow.year );
return 0;

}
