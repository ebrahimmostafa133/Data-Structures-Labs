#include <iostream>
#include "LinkedList.h"
using namespace std;

int main() {
    LinkedList list;
    list.InsertAtTail(5);
    list.PrintList();//5
    cout<<endl;
    list.InsertAtTail(10);
    list.PrintList();//5 10
    cout<<endl;
    list.InsertAtHead(3);
    list.InsertAtHead(9);
    list.InsertAtHead(6);

    list.PrintList();//6 9 3 5 10
    cout<<endl;
    cout<<"delete from head "<<list.DeleteFromHead()<<endl;//6
    list.PrintList();//9 3 5 10
    cout<<endl;
    cout<<"delete from tail "<<list.DeleteFromTail()<<endl;//10
    list.PrintList();//9 3 5
    cout<<endl;

    cout<<"delete from head "<<list.DeleteFromHead()<<endl;//9
    list.PrintList();//3 5
    cout<<endl;
    cout<<"delete from tail "<<list.DeleteFromTail()<<endl;//5
    list.PrintList();//3
    cout<<endl;

    cout<<"delete from head "<<list.DeleteFromHead()<<endl;
    list.PrintList();
    cout<<endl;
    cout<<"delete from tail "<<list.DeleteFromTail()<<endl;
    list.PrintList();
    cout<<endl;
    // list.InsertAfter(3,5);
    // list.PrintList();//5 3 10
    // cout<<endl;
    // list.InsertAfter(10,3);
    // list.PrintList();//5 3 10 10
    // cout<<endl;
    // list.InsertAfter(20,5);
    // list.PrintList();//5 20 3 10 10
    // cout<<endl;
    // list.InsertBefore(12,3);
    // list.PrintList();//5 20 12 3 10 10
    // cout<<endl;
    // list.InsertBefore(90,5);
    // list.PrintList();//90 5 20 12 3 10 10
    // cout<<endl;
    // int x=list.GetCount();
    // cout<<x<<endl;//7
    // cout<<list.GetDataByIndex(2)<<endl; //20
    // cout<<list.GetDataByIndex(-1)<<endl; //-1
    // cout<<list.GetDataByIndex(136)<<endl;//-1
    // cout<<list.GetDataByIndex(6)<<endl;//10
    // list.InsertAtTail(5);
    // list.PrintList();//90 5 20 12 3 10 10 5
    // cout<<endl;
    // list.RemoveALL(5);
    // list.PrintList();//90 20 12 3 10 10 
    // cout<<endl;
    // list.RemoveALL(152);//90 20 12 3 10 10
    // list.PrintList();
    // cout<<endl;

    
    return 0;
}