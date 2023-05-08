#include<iostream>
#include<stdlib.h>
using namespace std;

struct Node{
    int data;
    struct Node *pointer;
};
void display(struct Node *tempPointer){
    while(tempPointer!=NULL){
        printf("%d \n", tempPointer->data);
        tempPointer = tempPointer->pointer;
    }
}

int countNodes(struct Node *tempPointer){
    if(tempPointer == NULL){
        return 0;
    }
    return countNodes(tempPointer->pointer)+1;
}
int sumOfElementsInLinkedList(struct Node *tempPointer){
    if(tempPointer == NULL){
        return 0;
    }
    return sumOfElementsInLinkedList(tempPointer->pointer)+tempPointer->data;
}
int maxElemementInLinkedList(struct Node *tempPointer){
    static int max = tempPointer->data;
    if(tempPointer->data>max){
     return max = tempPointer->data;
    }else if(tempPointer->pointer!=NULL){
        return maxElemementInLinkedList(tempPointer->pointer);
    
    }
}
int maxElementUsingLoop(struct Node *tempPointer){
    int max = tempPointer->data;
    while(tempPointer!=NULL){
        if(tempPointer->data>max){
            max = tempPointer->data;
        }
        tempPointer = tempPointer->pointer;
    }
    return max;
}
int main(){
    struct Node *first;
    struct Node *second;
    first = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    first->data = 5;
    first->pointer = second;
    second->data = 10;
    second->pointer = NULL;
    display(first);
   cout<<"The number of nodes avaiale in the linked list are "<<countNodes(first)<<endl;
    cout<<"The sum of all the elements in node are "<<sumOfElementsInLinkedList(first)<<endl;
    cout<<"Maximum element using recursions: "<<maxElemementInLinkedList(first)<<endl;
    cout<<"Maximum element using loops: "<<maxElementUsingLoop(first)<<endl;
    return 0;

}