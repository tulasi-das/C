#include<iostream>
using namespace std;
void setElementsInMatrix(int array[], int row, int column, int element){
	if(row == column){
		array[row] = element;
	}
}

int getElementFromMatrix(int array[], int row, int column){
	if(row == column){
		return array[row];
	}else{
		return 0;
	}
}

int main(){

int array[5];

for(int i=0; i<5;i++){
	setElementsInMatrix(array, i, i, i+1);
}

for(int i=0;i<5;i++){
	cout << getElementFromMatrix(array, i, i) << endl;
}
return 0;

}
