#include <stdio.h>

int main(void){

void displaymat(int nrows, int ncols,int matrix[nrows][ncols]);

int m1[2][2]={{1,2},{3,4}};
int m2[2][2]={{2,2},{5,5}};
int n1[2][2];

int i,j;

printf("Input Matrix 1:\n");
    displaymat(2, 2, m1);

printf("Input Matrix 2:\n");
    displaymat(2, 2, m2);

for(i=0;i<2;++i){
    for(j=0;j<2;++j){
    n1[i][j]=m1[i][0]*m2[0][j]+m1[i][1]*m2[1][j];}}

printf("Output Matrix 1:\n");
displaymat(2,2,n1);

return 0; 
}



void displaymat(int nrows, int ncols,int matrix[nrows][ncols]){
    int row, col;

    for(row=0; row<nrows;++row){
        for(col=0; col<ncols; ++col)
            {printf("%5i", matrix[row][col]);}
        printf("\n");}
        }
