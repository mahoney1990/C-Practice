#include <stdio.h>

void multiply(float array[], int n){
    int i; 
    
    for(i=0; i<n ;++i){
        array[i]*=2;}
    
}

int main(void){
    float array_vals[4]={1.1f, 1.4f, 2.2f, 3.3f};
    int i;

    multiply(array_vals,4);

    for(i=0; i<4;++i){
        printf("%.2f\n",array_vals[i]);
    }

    return 0;
}



