#include<iostream>
using namespace std;
void swap(int *first_pointer, int *second_pointer){
int temp;
temp = *second_pointer;
*second_pointer = *first_pointer;
*first_pointer = temp;
}

int main(){
int first_number = 10;
int second_number = 20;

swap(&first_number, &second_number);

cout << first_number << endl;
cout << second_number << endl;

return 0;
}
