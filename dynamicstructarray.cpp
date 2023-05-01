#include<iostream>
#include<stdlib.h>
using namespace std;
struct Rectangle{
int length;
int breadth;
};

int main(){
struct Rectangle *rectangle;

rectangle = (struct Rectangle*)malloc(sizeof(struct Rectangle));
rectangle->length = 1;
rectangle->breadth = 2;
cout << rectangle->breadth<<endl;
cout << rectangle->length<<endl;

return 0;
}
