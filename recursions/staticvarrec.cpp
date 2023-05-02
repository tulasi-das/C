#include<iostream>
using namespace std;
// when we use static/global variables inside the recursive functions, only one copy of the static variable
// is created inside the memory


int staticSum(int number){
static int statVar = 0;

if(number > 0){
statVar++;
return staticSum(number - 1) + statVar;
}
return 0;
}

int main(){

int number = 3;
cout << staticSum(number)<<endl;

return 0;

}
