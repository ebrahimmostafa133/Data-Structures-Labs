#include ".././Linked List/LinkedList.h"
#include <iostream>

using namespace std;

class Queue{
    private:LinkedList list;
    public:
        void insertRear(int item){
            list.InsertAtHead(item);
        }

        void insertFront(int item){
            list.InsertAtTail(item);
        }

        void deleteFront(){
            int temp= list.DeleteFromTail();
            if(temp != -10)
            cout<<"data "<<temp<<" deleted successfully"<<endl;
        }

        void deleteRear(){
            int temp= list.DeleteFromHead();
            if(temp != -10)
            cout<<"data "<<temp<<" deleted successfully"<<endl;
        }

        void displayQ(){
            list.PrintList();
            cout<<endl;
        }
};

int main(){
    Queue q;
    q.insertRear(10);
    q.insertRear(20);
    q.insertRear(30);
    q.insertRear(40);
    q.insertRear(50);
    q.insertRear(60);
    q.displayQ();
    cout<<endl;
    q.insertFront(7);
    q.insertFront(8);
    q.displayQ(); 
    cout<<endl;
    q.deleteFront();//8
    q.deleteFront();//7
    q.deleteFront();//10
    q.displayQ(); 
    cout<<endl;
    q.deleteRear();//60
    q.deleteRear();//50
    q.deleteRear();//40
    q.displayQ(); //20 30;
    cout<<endl;

    q.deleteFront();//20
    q.deleteRear();//30

    q.deleteFront();//empty
    q.deleteRear();//empty

    q.displayQ();
    cout<<endl;
    
    q.insertRear(10);
    q.insertRear(20);
    q.insertRear(30);
    q.insertRear(40);
    q.insertRear(50);

    q.insertFront(11);
    q.insertFront(12);
    q.insertFront(13);
    q.insertFront(14);
    q.insertFront(15);

    q.insertRear(33);
    q.insertFront(44);


    q.displayQ();
    cout<<endl;
    
    return 0;
}