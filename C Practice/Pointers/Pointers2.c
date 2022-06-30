#include <stdio.h>

int main(){

    int var1;
    int *ip =NULL;

    var1=10;
    ip = &var1;

    printf("You want a fucking RAM address? Here it is: %x\n",ip);
    printf("You want a fucking Var1 value? Here it is: %i\n",*ip);

    return 0; 

}

int main(){

    int var1;
    int *ip =NULL;

    var1=10;
    ip = &var1;

    printf("You want a fucking RAM address? Here it is: %x\n",ip);
    printf("You want a fucking Var1 value? Here it is: %i\n",*ip);

    return 0; 

}