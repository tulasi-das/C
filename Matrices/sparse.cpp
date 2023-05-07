#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct Elements{
    int row;
    int column;
    int element;
};
struct Sparse{
    int noOfRows;
    int noOfColulmns;
    int noOfNonZeroElements;
    struct Elements *element;
};
void create(struct Sparse *sparse){
    printf("enter the number of rows \n");
    scanf("%d", &sparse->noOfRows);
    printf("enter the number of columns\n");
    scanf("%d", &sparse->noOfColulmns);
    printf("Enter the no of non zero elements");
    scanf("%d", &sparse->noOfNonZeroElements);
    sparse->element = new Elements[sparse->noOfNonZeroElements];
    for(int i=0;i<sparse->noOfNonZeroElements;i++){
        printf("Enter the row ");
        scanf("%d", &sparse->element[i].row);
        printf("Enter the column ");
        scanf("%d", &sparse->element[i].column);
        printf("Enter the element ");
        scanf("%d", &sparse->element[i].element);
    }

}
void display(struct Sparse sparse){
    for(int i=0;i<sparse.noOfNonZeroElements;i++){
        printf("%d ", sparse.element[i].row);
        printf("%d ", sparse.element[i].column);
        printf("%d ", sparse.element[i].element);
        printf("\n");
}
}
int main(){
    struct Sparse sparse;
    create(&sparse);
    display(sparse);
    return 0;
}