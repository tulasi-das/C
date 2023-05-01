#include<iostream>
using namespace std;
struct Card{
	int face;
	int shape;
	int color;
};
int main(){
struct Card card[2] = {{1,2,3},{3,4,3}};
cout<<card[0].face<<endl;
cout<<card[1].shape<<endl;

return 0;

}
