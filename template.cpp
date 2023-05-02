#include<iostream>
using namespace std;
template <class T>
class Calculator{

private:
T firstNumber;
T secondNumber;

public:
Calculator(T fNumber, T sNumber){

firstNumber = fNumber;
secondNumber = sNumber;

}
T addition(){

return firstNumber+secondNumber;
}
T substraction(){
return firstNumber - secondNumber;
}

T multiplication(){
return firstNumber * secondNumber;
}
T division(){
if(secondNumber == 0){
return 0;
}
return firstNumber/secondNumber;
}

};

int main(){
Calculator calc(20.5,10.0);

cout << calc.addition() << endl;
cout << calc.substraction() << endl;
cout << calc.multiplication() << endl;
cout << calc.division() << endl;

return 0;
}




