#include "LinkedList.h"
#include <iostream>
using namespace std;

void swap(Node* a, Node* b) {
    int temp = a->data;
    a->data = b->data;
    b->data = temp;

}

void SelectionSortLinkedList(LinkedList list) {
    if (list.head == nullptr) return; 
    Node* curr = list.head;
    while(curr != nullptr){
        Node* minNode = curr;
        Node* r = curr->next;

        while(r != nullptr){
            if(r->data < minNode->data)
                minNode = r;
            r = r->next;
        }
        swap(curr,minNode);
        curr = curr->next;
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
    SelectionSortLinkedList(list);

    cout << "Sorted List: ";
    list.PrintList();
    cout << endl;
    return 0;
}