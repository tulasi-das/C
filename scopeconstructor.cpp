#include<iostream>
using namespace std;

class Rectangle{

private:
int length;
int breadth;

public:
Rectangle(int l, int b);
int area();
int perimeter();

};

Rectangle::Rectangle(int l, int b){
length = l;
breadth = b;
}

int Rectangle::area(){
return length*breadth;
}
int Rectangle::perimeter(){
return length + breadth;
}
int main(){
Rectangle rectangle(10,20);
cout << "The area of the rectangle is: " << rectangle.area() << endl;
cout << "The perimeter of the rectangle is: " << rectangle.perimeter() << endl;

return 0;

}

