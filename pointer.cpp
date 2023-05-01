#include<iostream>
using namespace std;
int main(){

int *pointer_variable;
// pointer variable stores the address

int number=5;

pointer_variable = &number;

cout << pointer_variable << endl;
cout << *pointer_variable<< endl;

return 0;

}
