#include<iostream>
#include<stdlib.h>
//malloc function is available in stdlib
using namespace std;
int main(){

int *pointer_variable;

pointer_variable = (int *)malloc(5*sizeof(int));

pointer_variable[0] = 1;
pointer_variable[1] = 2;

for(int i=0;i<5;i++){
cout<<pointer_variable[i]<<endl;

}
return 0;

}
