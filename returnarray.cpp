#include<iostream>
using namespace std;
int* returnarray(int length){
int *array_pointer;
array_pointer = (int *)malloc(length*sizeof(int));
return array_pointer;
}

int main(){
int lenght_of_array = 10;

int *pointer_variable;
pointer_variable = returnarray(lenght_of_array);

for(int i=0; i<10; i++){
cout << pointer_variable[i] <<endl;
}
}

