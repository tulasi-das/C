#include<iostream>
using namespace std;

void voidpointer(void *ptr, char type){
    if(type == 'i'){
      cout<< *((int *)ptr) << endl;
    }
    if(type == 'f'){
      cout<< *((int *)ptr) << endl;
    }
    if(type == 'd'){
      cout<< *((int *)ptr) << endl;
    }
    if(type == 'l'){
      cout<< *((int *)ptr) << endl;
    }

}
int main(){

    int number = 5;
    voidpointer(&number, 'i');
    return 0;

}