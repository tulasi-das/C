#include<iostream>
using namespace std;

void printNumbers(int number){

if(number > 0){
cout << number << endl;
printNumbers(number - 1);
}
}

int main(){
int number = 5;
printNumbers(number);

return 0;

}


// this example is also called as tail recursion, becuase the last statement in the recursive function is calling
// itself
