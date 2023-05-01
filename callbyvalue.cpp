#include<iostream>
#include<stdlib.h>
using namespace std;
void swap(int number1, int number2){
int temp;
 temp = number1;
 number1 = number2;
 number2 = temp;
}

int main(){
int first_number = 10;
int second_number = 20;
swap(first_number, second_number);

cout<< first_number<<endl;
cout<< second_number<<endl;

return 0;
}
