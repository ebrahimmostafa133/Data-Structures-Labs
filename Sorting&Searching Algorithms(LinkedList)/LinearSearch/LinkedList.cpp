#include "../../Linked List/LinkedList.h"
#include <iostream>
using namespace std;
void LinkedList::InsertAtTail(int data)
{
    Node* newNode = new Node(data);
    if (head == nullptr)head = tail = newNode;//first element
    else{
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

void LinkedList ::InsertAtHead(int data)
{
    Node* newNode =new Node(data);
    if (head == nullptr)head = tail = newNode;
    else{
        head->prev=newNode;
        newNode->next= head;
        head=newNode;
    }
}

int LinkedList:: DeleteFromTail(){
    if(GetCount()!=0){
        int temp=tail->data;
        tail=tail->prev;
        tail->next=nullptr;
        return temp;
    }
    else{
        cout<<"linkedlist is empty ";
        return -10;
    }
    
}

int LinkedList:: DeleteFromHead(){
    if(GetCount()!=0){
        int temp= head->data;
        head=head->next;
        return temp;
    }
    else{
        cout<<"linkedlist is empty ";
        return -10;
    }
    
}

//1. indsert node after given node
void LinkedList::InsertAfter(int data,int afterData){
    Node* current = head;
    while(current != nullptr){
        if(current->data ==afterData){
            Node* newNode = new Node(data);

            newNode->next = current->next;
            newNode->prev =current;
            if(current->next==nullptr)tail=newNode;
            else current->next->prev=newNode;
            current->next =newNode;
            return;
        }
        current =current->next;
    }
    
}

//2. indsert node before given node
void LinkedList::InsertBefore(int data, int beforeData) {
    if (head == nullptr) return;
    Node* current = head;

    while (current != nullptr) {
        if (current->data == beforeData) {
            Node* newNode = new Node(data);

            newNode->next = current;
            newNode->prev = current->prev;
            if (current->prev == nullptr)head = newNode;
            else current->prev->next = newNode;
            current->prev = newNode;
            return;
        }
        current = current->next;
    }
}


//3. get number of nodes 
int LinkedList::GetCount(){
    if(head==nullptr)return 0;
    Node* current= head;
    int count=0;
    while(current !=nullptr){
        count++;
        current =current->next;
    }
    return count;
}

//4. get data in the given index
int LinkedList:: GetDataByIndex(int index){
    if(index<0 || index >=GetCount())return -1;
    Node* current =head;
    while(index--){
        current=current->next;
    }
    return current->data;
}

//5. Remove All Nodes
void LinkedList:: RemoveALL(int data){
    Node* current =head;
    while(current){
        if(current->data == data){
            //Node* nodeToDelete = current;
            //Node* nextNode = current->next;

            //node was in the head
            if(current->prev == nullptr)head= current->next;
            else current->prev->next=current->next;//not the first

            //node was the last one
            if(current->next == nullptr)tail =current->prev;
            else current->next->prev =current->prev;//nor the last

            //move before delete
            Node* next = current->next;
            delete current;
            current = next;
            
        }
        else{
            current = current->next;
        }
    }
}

//6. Print the list
void LinkedList:: PrintList(){
    if(head==nullptr){
        cout<<"Linked list is empty"<<endl;
        return;
    } 
    Node* current= head;
    while(current !=nullptr){
        cout<< current->data<<" ";
        current =current->next;
    }
}