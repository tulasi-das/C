#include<iostream>

using namespace std;
char* changeCase(char str[]){
    for(int i=0;str[i]!='\0';i++){
        str[i] = str[i] + 32;
    }
      return (char*)str;
}
int main(){
    char name[] = "tulasidas";
    int length;
    for(int i=0; name[i]!='\0';i++){
        length++;
    }
    cout << "The length of the string is: " << length << endl;

    cout << "Changing the cases to lower case :"<< endl;

    char str[] = "TULASIDAS";
    cout << changeCase(str);
}