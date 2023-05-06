#include<iostream>
using namespace std;

class Diagonal{
private:
int Array[10];
int size;
public:
void setElements(int row, int column,int element){
	if(row == column){
	Array[row] = element;
	}
}
int getElements(int row, int column){
	if(row == column){
	return Array[row];
	}
	else return 0;
}
};
int main(){
	Diagonal matrix;
	matrix.setElements(1,1,5);
	cout << matrix.getElements(1,1);
	return 0;
}
