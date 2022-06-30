#include <stdio.h>

int main(void){
    char c='Q';
    char *char_p = &c;


    printf("%x", char_p);

    return 0;
}
