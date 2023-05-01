#include<iostream>
using namespace std;
struct Rectangle{
int length;
int breadth;
};
int main(){
struct Rectangle rectangle = {10,20};
struct Rectangle *rec = &rectangle;

cout << rec->length << endl;
cout << rec->breadth << endl;
return 0;
}
