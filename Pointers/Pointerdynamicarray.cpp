#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
    int **twoDimentionalDinamicArray; // created a pointer to pointer
    int rows;
    cout <<"Enter the number of pointers in an array"<<endl;
    cin >> rows;
    twoDimentionalDinamicArray = new int*[rows];
    for(int i=0;i<rows;i++){
        twoDimentionalDinamicArray[i] = new int[4];
    }
    twoDimentionalDinamicArray[1][2] = 5;
    cout<<twoDimentionalDinamicArray[1][2];
    //when you dont use a particular pointer in the memory you have to delete that one
    for(int i=0;i<rows;i++){
        delete[] twoDimentionalDinamicArray[i];
    }
    delete[] twoDimentionalDinamicArray;
    twoDimentionalDinamicArray = NULL;
}