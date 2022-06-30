#include <stdio.h>

int main(void){

    int det(int matrix[2][2]);

    int mat[2][2]={{1,2},{1,2}};
    
    
    printf("%i\n", det(mat));

    return 0;

}

int det(int matrix[2][2]){
    int det;
    det = matrix[0][0]*matrix[1][1]-matrix[0][1]*matrix[1][0];
    return(det);

}



