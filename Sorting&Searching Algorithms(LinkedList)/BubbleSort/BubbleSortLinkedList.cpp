#include "LinkedList.h"
#include <iostream>
using namespace std;

void swap(Node* a, Node* b) {
    int temp = a->data;
    a->data = b->data;
    b->data = temp;

}

void bubbleSortLinkedList(LinkedList list) {
    if (list.head == nullptr) return; 
    Node* curr = list.head;
    //Node* temp = list.head;
    for(int i=0;i<=list.GetCount();i++){
        while((curr != nullptr && curr->next != nullptr)){
            if(curr->data > curr->next->data)
                swap(curr,curr->next);
            curr = curr->next;
        }
        //temp = temp->next;
        curr = list.head;
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
    bubbleSortLinkedList(list);

    cout << "Sorted List: ";
    list.PrintList();
    cout << endl;
    return 0;
}