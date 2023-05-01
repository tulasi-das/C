#include<iostream>
using namespace std;
struct Rectangle{
int length;
int breadth;
};
void change_length(struct Rectangle *rectangle){
rectangle->length = 20;
}
int main(){
struct Rectangle rectangle;

rectangle.length = 10;
change_length(&rectangle);
cout<< rectangle.length<<endl;
return 0;
}
