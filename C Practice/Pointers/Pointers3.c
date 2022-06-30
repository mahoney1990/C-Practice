#include <stdio.h>

void compare(int a, int b, int* add_great, int* add_small ){

    if(a>b){
        *add_great = a;
        *add_small = b;}
    else{
        *add_great=b;
        *add_small=a;
    }

}

int main(void){
    int great, small, x, y;

    x=5;
    y=3;

    compare(x, y, great, small);
    printf("\nThe greater number is %d and the"
           "smaller number is %d",
           great, small);


    return 0;
}


