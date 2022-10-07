#include<stdio.h>
int main(){
    int **matrix;//the pointer to pointer variable
    int rows, cols, row, col;
    printf("Enter the number of rows\n");
    scanf("%d", &rows);
    printf("Enter the number of columns\n");
    scanf("%d", &cols);
    matrix=(int**)malloc(rows*sizeof(int*));
    for(row=0;row<rows;row++){
        matrix[row]=(int*)malloc(cols*sizeof(int));
    }
    printf("Enter the elements of matrix\n");
    for(row=0;row<rows;row++){
        for(col=0;col<cols;col++){
            printf("Enter the elemnt\n");
            scanf("%d", &matrix[row][col]);
        }
    }
    for(row=0;row<rows;row++){
        for(col=0;col<cols;col++){
            printf("%d\t", matrix[row][col]);
        }
        printf("\n");
    }
    return 0;
}