#include <stdio.h>

float abs_value(float x){
    if( x <0 )
        x=-x;
    return(x);
    }


float minimizer_x2(float guess, int max_its){
    int its;
    float deriv_val, tol;
    
    deriv_val=2*guess;
    tol=.01;

    while(abs_value(deriv_val)>tol){
        its=its+1;
        guess=-.1*deriv_val+guess;
        deriv_val=2*guess;
        
     //   if( its > max_its) {
     //       printf("Max Iterations Reached!\n");
     //       break;}
        }

    return(guess);

}


float minimizer_polynom(float guess, int max_its){
    int its;
    float deriv_val, tol;
    
    deriv_val=3*guess*guess+8*guess-3;
    tol=.01;

    while(abs_value(deriv_val)>tol){
        its=its+1;
        guess=-.1*deriv_val+guess;
        deriv_val=3*guess*guess+8*guess-3;
        
     //   if( its > max_its) {
     //       printf("Max Iterations Reached!\n");
     //       break;}
        }

    return(guess);

}


int main(void){
    printf("Minimzer of X^2 = %f\n", minimizer_x2(2.0, 10000));
    
    printf("Minimzer of X^3+4x^2-3x = %f\n", minimizer_polynom(2.0,10000));
    
    return 0 ;

}







