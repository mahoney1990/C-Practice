# include <stdio.h>

float abs_value(float x){
    if( x <0 )
        x=-x;
    return(x);
    }

float sq_root(float x){
    float tol =.00001;
    float guess=1.0;


    while(abs_value(x-(guess*guess))>tol)
        guess=(x/guess + guess)/2.0;

    return(guess);

}

int main(void){
    printf("Sq_root 2.0 = %f\n", sq_root(2.0));
    return 0 ;

}







