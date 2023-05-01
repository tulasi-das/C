#include<iostream>
using namespace std;

struct Rectangle{
int length;
int breadth;
};
int area_of_rectangle(struct Rectangle rectangle){
return rectangle.length * rectangle.breadth;
}
void change_length(struct Rectangle rectangle){
rectangle.length = 20;
}

int main(){
struct Rectangle rectangle;
rectangle.length = 1;
rectangle.breadth = 2;
change_length(rectangle);
cout << rectangle.length << endl; 
cout << area_of_rectangle(rectangle) << endl;
return 0;
}
