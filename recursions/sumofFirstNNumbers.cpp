#include<iostream>
using namespace std;

int sumOfFirstNNumbers(int number){
if(number > 0){
return sumOfFirstNNumbers(number - 1) + number;
}
return 0;
}

int main(){
int number = 5;
cout << "the sum of first N numbers is " << sumOfFirstNNumbers(number)<<endl;
return 0;

}

