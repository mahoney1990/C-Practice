#include <stdio.h>

int minimum(int values[10]){
    int minvalue, i;
    minvalue=values[0];
    
    for(i=1; i<10; ++i)
        if(values[i]<minvalue)
            minvalue=values[i];

    return(minvalue);
}

int main(void){
    int scores[10], i, minscore;
    int minimum(int values[10]);

    printf("Enter 10 scores\n");

    for(i=0; i<10; ++i){
        scanf("%i", &scores[i]);}

    minscore=minimum(scores);
    printf("The Minimum Score is: %i\n", minscore);

    return 0;
}




