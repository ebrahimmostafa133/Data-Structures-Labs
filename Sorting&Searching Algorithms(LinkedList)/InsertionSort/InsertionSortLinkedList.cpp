#include "LinkedList.h"
#include <iostream>
using namespace std;

void InsertionSortLinkedList(LinkedList list){
    Node* curr =list.head;
    if(curr ==nullptr || curr->next ==nullptr)return;
    while(curr!=nullptr){
        int data =curr->data;
        Node* PREVIOUS =curr->prev;
        while(PREVIOUS !=nullptr && PREVIOUS->data > data){
            PREVIOUS->next->data = PREVIOUS->data;
            PREVIOUS = PREVIOUS->prev;
        }
        if(PREVIOUS == nullptr)list.head->data = data;
        else PREVIOUS->next->data =data;
        curr= curr->next;
    }
}

int main() {
    LinkedList list;
    list.InsertAtTail(5);
    list.InsertAtTail(3);
    list.InsertAtTail(8);
    list.InsertAtTail(1);
    list.InsertAtTail(4);

    cout << "Original List: ";
    list.PrintList();
    cout << endl;
    InsertionSortLinkedList(list);

    cout << "Sorted List: ";
    list.PrintList();
    cout << endl;
    return 0;
}