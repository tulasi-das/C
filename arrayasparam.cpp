#include<iostream>
using namespace std;

int array_sum(int numbers[], int length){
int sum = 0;
for(int i = 0; i<length; i++){
sum = sum + numbers[i];
}
return sum;
}
int main(){
int numbers[5] = {1,2,3,4,5};
int sum = array_sum(numbers, 5);

cout << sum << endl;
return 0;
}
