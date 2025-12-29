#include "../../Linked List/LinkedList.h"
#include <iostream>
using namespace std;

int LinearSearchLinkedList(LinkedList list,int item){
    Node * curr = list.head;
    int index=0;
    while (curr!=nullptr && curr->data !=item)
    {
        index++;
        curr=curr->next;
    }
    if(curr ==nullptr){
        cout<<"item not found"<<endl;
        return -1;
    }
    return index;
    
}

int main(){

    LinkedList list;
    list.InsertAtTail(10);
    list.InsertAtTail(10);
    list.InsertAtTail(10);
    list.InsertAtTail(8);
    list.InsertAtTail(10);
    list.InsertAtTail(10);
    list.InsertAtTail(10);
    list.InsertAtTail(10);
    list.InsertAtTail(10);
    list.InsertAtTail(6);
    cout<<LinearSearchLinkedList(list,10);
    cout<<LinearSearchLinkedList(list,8);
    cout<<LinearSearchLinkedList(list,6);
    cout<<LinearSearchLinkedList(list,15);

    return 0;
}