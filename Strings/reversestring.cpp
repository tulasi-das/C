#include<iostream>
using namespace std;

int main(){

    char name[] = "tulasidas";
    char copyName[8];
    int i;
    for(i=0;name[i]!='\0'; i++){
        copyName[i] = name[i];
    }
    copyName[i] = '\0';

    cout <<"The newly copied name is: "<< copyName << endl;
}