#include "LinkedList.h"
#include <iostream>
using namespace std;

int BinarySearchLinkedList(LinkedList list,int item){
    Node* curr = list.head;
    int low = 0;
    int high = list.GetCount() - 1;
    int mid;

    while (low <= high) {
        mid = (low + high) / 2;
        curr = list.head;
        for (int i = 0; i < mid; i++) {
            curr = curr->next;
        }
        if (curr->data == item) {
            return mid;
        } else if (curr->data < item) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

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

    int itemToFind = 8;
    int result = BinarySearchLinkedList(list, itemToFind);

    if (result != -1) {
        cout << "Item " << itemToFind << " found at index: " << result << endl;
    } else {
        cout << "Item " << itemToFind << " not found in the list." << endl;
    }

    return 0;
}