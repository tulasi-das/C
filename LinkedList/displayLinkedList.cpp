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
struct Node* searchElementInLinkedList(struct Node *tempPointer, int element){
    while(tempPointer!=NULL){
        if(tempPointer->data == element){
            return tempPointer;
        }
        tempPointer = tempPointer->pointer;
    }
    return 0;
}
void insertIntoALinkedList(struct Node *tempPointer, int position, int element){
    if(position == 0){
    struct Node *atZero;
    struct Node *pointingPointer=tempPointer;
     atZero = (struct Node *)malloc(sizeof(struct Node));
    atZero->data = element;
    atZero->pointer = pointingPointer;
    pointingPointer = atZero;
    }else if(position>0){
        struct Node *atPosition;
        struct Node *pointingPointer;
        pointingPointer = tempPointer;
        atPosition = (struct Node *)malloc(sizeof(struct Node));
        atPosition->data = element;
        for(int i=0;i<position-1&&pointingPointer;i++){
            pointingPointer=pointingPointer->pointer;
        }
        if(pointingPointer){
        atPosition->pointer = pointingPointer->pointer;
        pointingPointer->pointer = atPosition;
        }
    }
}
void insertingInASortedLinkedList(int element, struct Node *tempPointer){
    struct Node *nodeForElement;
    nodeForElement = (struct Node *)malloc(sizeof(struct Node));
    nodeForElement->data = element;
    nodeForElement->pointer = NULL;
    struct Node *firstPointer;
    firstPointer = NULL;
    struct Node *secondPointer = tempPointer;
    if(secondPointer==NULL){
        secondPointer = nodeForElement;
    }else{
        while((secondPointer!=NULL) && (secondPointer->data<nodeForElement->data)){
            firstPointer = secondPointer;
            secondPointer = secondPointer->pointer;
        }
        nodeForElement->pointer = secondPointer;
        firstPointer->pointer = nodeForElement;
    }

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
    cout<<"The element found at: "<< searchElementInLinkedList(first,5)<<endl;
    insertIntoALinkedList(first,1,19);
    insertIntoALinkedList(first, 0, 20);
    display(first);

    struct Node *sortedPointer;
    sortedPointer = (struct Node *)malloc(sizeof(struct Node));
    sortedPointer->data = 5;
    sortedPointer->pointer = NULL;
    insertingInASortedLinkedList(6, sortedPointer);
    insertingInASortedLinkedList(7,sortedPointer);
    display(sortedPointer);
    return 0;

}