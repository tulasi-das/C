#include<iostream>
using namespace std;

struct Rectangle{
int length;
int breadth;
};

int main(){

struct Rectangle rectangle = {10, 20};

cout<<rectangle.length<<endl;
cout<<rectangle.breadth<<endl;

return 0;

}
