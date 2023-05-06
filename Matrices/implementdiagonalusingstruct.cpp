#include<iostream>
using namespace std;

struct arrStruct{
	int array[10];
	int size;
};
void setElementsInMatrix(struct arrStruct *arrayPointer, int row, int column, int element){
	if(row == column){
	arrayPointer->array[row] = element;
	}
}
int getElementsInMatrix(struct arrStruct arrayPointer, int row, int column){
	if(row == column){
	return arrayPointer.array[row];
	}else{
	return 0;
}
}

int main(){

struct arrStruct arrayPointer;

arrayPointer.size = 4;

setElementsInMatrix(&arrayPointer, 1, 1, 5);
cout << getElementsInMatrix(arrayPointer, 1, 1)<<endl;
return 0;
}


