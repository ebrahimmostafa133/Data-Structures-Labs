#include <iostream>
using namespace std;

/*
Simple Queue :
  problems : deleted Elements cant Be reused
  solution : Circular Queue

Delete ===> Front
Insert ===> Rear
==================================================
Circular Queue
Delete ===> Front
Insert ===> Rear
==================================================
Priority Queue

Delete ===> Priority, Front
Insert ===>  Rear
==================================================
Double Ended Queue
=============================
Input Restricted  [One Inertion , Both Delete]
insertRear();
deleteFront();
deleteRear();


Output Restricted
insertRear();
insertFront();
deleteFront();


*/
class MinaQueue{
    private :
        int * items ;
        int rear ; //EnterIndex
        //int front; //OutIndex
        int capicty;
        int size;
    public:
    int front; //OutIndex
    MinaQueue(int capicty){
        rear=-1;
        front=-1;
        //size=0;
        this->capicty=capicty;
        items=new int[capicty];
    }
    ~MinaQueue(){
        delete [] items;
    }

    void insertRear(int item){
        //Check Full
        if((front == 0 && rear == capicty-1 ) || (front == rear +1 )){
          //if(size == capicty){}
            //Resize Dynamic Array
            cout<<"is Full "<<endl;
            return ;
        }

        //Setting Rear and Front
        //First Element
        if(rear == -1 &&  front == -1  ){
            rear=0;
            front=0;
        }else if (rear == capicty-1){ //&& front != 0
            rear=0;
        }else{
            rear++;
        }
        //Add item
        items[rear]=item;
        //size++;

    }
    
    int deleteFront(){
        //Check Empty
        if(front == -1 ){cout<<"Empty Queue" ; return -1;}
        //if(size == 0 ){cout<<"Empty Queue" ; return -1;}

        //Backup Item
        int temp = items[front];
        //Delete Item
        items[front]=-10;//-10 for Debug
        //Change Front and Rear
        if(front == rear ){
         front =-1;
         rear=-1;
        }else if (front == capicty -1 ){
            front =0;
        }
        else{
            front ++;
        }
        //return Item
        //size--;
        return temp;
    }

    void display(){
    cout<<"\n========================================\n";

        //Empty
        if(front == -1 ){cout<<"Empty Queue" ; return ;}
        /*if(front <= rear){
            for (int i= front ; i<= rear; i++){
                cout<<items[i]<< "\t";
            }
        }else { //front >= rear
            for (int i= front ; i< capicty; i++){
                cout<<items[i]<< "\t";
            }
            for (int i= 0 ; i<= rear; i++){
                cout<<items[i]<< "\t";
            }

        }*/
        //rear =0 front =1
        //front 3   rear = 2   3 4 0 1 2
        int i = (front)%capicty; // 3%5 ===> 3
        while(i != rear){
            cout<<items[i]<< "\t";
            i=(i+1)%capicty;
        }
        cout<<items[rear];
        cout<<"\n========================================\n";
    }

    void insertFront(int item){
        //Check Full
        if((front == 0 && rear == capicty-1 ) || (front == rear +1 )){
          //if(size == capicty){}
            //Resize Dynamic Array
            cout<<"is Full "<<endl;
            return ;
        }
        //First Element
        if(rear == -1 &&  front == -1  ){
            rear=0;
            front=0;
        }else if(front==0)front=capicty-1;
        else front--;
        items[front]=item;



    }
    
    int deleteRear(){
        //Check Empty
        if(rear == -1 ){cout<<"Empty Queue" ; return -1;}
        //if(size == 0 ){cout<<"Empty Queue" ; return -1;}

        //Backup Item
        int temp = items[rear];
        //Delete Item
        items[rear]=-10;//-10 for Debug
        //Change Front and Rear
        if(front == rear ){
         front =-1;
         rear=-1;
        }else if(rear==capicty-1)rear=0;
        else rear--;

        return temp;


    }
};






int main()
{
     MinaQueue q(10);
     q.insertRear(10);
     q.insertRear(20);
     q.insertRear(30);
     q.insertRear(40);
     q.insertRear(50);
     q.insertRear(60);
     q.display();//10 20 30 40 50 60
     q.insertFront(7);
     q.insertFront(8);
     q.display(); //8 7 10 20 30 40 50 60

    cout<< "data is "<<q.deleteFront()<<endl;//8
    cout<< "data is "<<q.deleteFront()<<endl;//7
    cout<< "data is "<<q.deleteFront()<<endl;//10
    q.display(); //20 30 40 50 60 
    cout<< "data is "<<q.deleteRear()<<endl;//60
    cout<< "data is "<<q.deleteRear()<<endl;//50
    cout<< "data is "<<q.deleteRear()<<endl;//40
    q.display(); //20 30;

    cout<< "data is "<<q.deleteFront()<<endl;//20
    cout<< "data is "<<q.deleteRear()<<endl;//30

    cout<< "data is "<<q.deleteFront()<<endl;//empty
    cout<< "data is "<<q.deleteRear()<<endl;//empty

    q.display();
    
    q.insertRear(10);
    q.insertRear(20);
    q.insertRear(30);
    q.insertRear(40);
    q.insertRear(50);

    q.insertFront(10);
    q.insertFront(20);
    q.insertFront(30);
    q.insertFront(40);
    q.insertFront(50);

    q.insertRear(10);
    q.insertFront(10);

    // q.display();//10 20 30 40 50 70 80
    // cout<< "data is "<<q.deleteFront()<<endl;//10
    // cout<< "data is "<<q.deleteFront()<<endl;//20
    // cout<< "data is "<<q.deleteFront()<<endl;//30
    // cout<< "data is "<<q.deleteFront()<<endl;//40
    // cout<< "data is "<<q.deleteFront()<<endl;//50
    // cout<< "data is "<<q.deleteFront()<<endl;//70
    // q.display();//Empty

    // q.insertRear(90);
    // q.insertFront(22);
    // q.insertRear(100);
    // q.insertFront(33);
    // q.insertRear(1000);
    q.display();
    //33 22 90 100 1000
    // cout << "Hello world!" << endl;




    return 0;
}
