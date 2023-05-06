#include<iostream>
#include<stdlib.h>
using namespace std;
struct Matrix{

    int *Array;
    int dimention;
};

void setValue(struct Matrix *matrix, int row, int column, int element){
    if(row >= column){
        matrix->Array[row*(row-1)/2 + (column-1)] = element;
    }

}
void display(struct Matrix matrix){
    int row, column;
    for(row = 1; row<=matrix.dimention;row++){
        for(column = 1; column<=matrix.dimention; column++){
            if(row>=column){
                printf("%d ", matrix.Array[row*(row-1)/2+(column-1)]);
            }else{
                printf("0 ");
            }
        }
    }
}

int main(){

    struct Matrix matrix;
    int row, column,element;
    printf("enter the dimention of the array");
    scanf("%d", &matrix.dimention);
    matrix.Array = (int *)malloc(matrix.dimention*(matrix.dimention*(matrix.dimention+1)/2)*sizeof(int));
    for(row=1;row<=matrix.dimention;row++){
        for(column=1; column<=matrix.dimention;column++){
            scanf("%d", &element);
            setValue(&matrix, row,column,element);
        }
    }
    display(matrix);
    return 0;
}
