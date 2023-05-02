#include<iostream>
using namespace std;

class Rectangle{
private:
int length;
int breadth;
public:
Rectangle(int l, int b){
length = l;
breadth = b;
}

int area(){
return length*breadth;
}

};

int main(){

Rectangle rectangle(10,20);

cout << rectangle.area()<<endl;

return 0;

}
