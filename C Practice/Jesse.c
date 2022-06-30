#include <stdio.h>
#include <windows.h>

void print_text(void){
    printf("Fuck you Jesse!\n");
   
    printf("Bearded piece of shit!!\n");


}

int main(void){
    int i;
    
    for(i=1; i<100000 ;++i)
        print_text();
        sleep(20);
    


    return 0; 
}