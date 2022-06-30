#include <stdio.h>

int main(void){

    void multiply(int nrows, int ncols, int array[nrows][ncols], int scaler);
    void displaymat(int nrows, int ncols,int matrix[nrows][ncols]);

    int matrix[3][5] ={{1,2,3,4,5},
                      {6,7,8,9,10},
                      {11,12,13,14,15} };

    printf("Input Matrix:\n");
    displaymat(3, 5, matrix);

    multiply(3, 5, matrix,5);

    printf("Output Matrix:\n");
    displaymat(3, 5, matrix);

    printf("\a");
    return 0;

}

void multiply(int nrows, int ncols, int array[nrows][ncols], int scaler){
    int row,col; 

    for(row=0; row<3 ;++row){
        for(col=0;col<5;++col) 
            {array[row][col]*=scaler;}
    
}}

void displaymat(int nrows, int ncols,int matrix[nrows][ncols]){
    int row, col;

    for(row=0; row<3;++row){
        for(col=0; col<5; ++col)
            {printf("%5i", matrix[row][col]);}
        printf("\n");}
        }







