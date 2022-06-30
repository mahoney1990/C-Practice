#include <stdio.h>

float abs_value(float x){
    if( x <0 )
        x=-x;
    return(x);
    }


float minimizer_x2(float guess, int max_its, int* its_p, float* guess_p, float* fn_p){
    int its=0;
    float deriv_val, tol;
    
    deriv_val=2*guess;
    tol=.01;

    while(abs_value(deriv_val)>tol){
        its=its+1;
        guess=-.15*deriv_val+guess;
        deriv_val=2*guess;
        
     //   if( its > max_its) {
     //       printf("Max Iterations Reached!\n");
     //       break;}
        }

    *its_p=its;
    *guess_p=guess;
    *fn_p=guess*guess;
}


int main(void){
    int it;
    float val,fn;

    minimizer_x2(5,1000,&it,&val,&fn);
    printf("Minimzer of X^2: %f\n",val,it);
    printf("Iterations: %i\n",it);
    printf("Function value: %f\n",fn);


    return 0 ;

}







