#include<iostream>
#include<stdlib.h>
int main(){
int first_number = 10;
int &ref_to_first_number = first_number;
ref_to_first_number = 20;

std::cout << "the value of first number is " << first_number<<endl;

return 0;

}
