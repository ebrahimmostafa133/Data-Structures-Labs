class Node{
public:
    int data;
    Node* next;
    Node* prev;
    Node(int d){
        data=d;
        next= nullptr;
        prev= nullptr;
    }
};
class LinkedList
{
    public:
        Node* head;
        Node* tail;
        LinkedList(){
            head= nullptr;
            tail= nullptr;
        }
    void InsertAtTail(int data);    //needed to the Q
    void InsertAtHead(int data);    //needed to the Q
    int DeleteFromTail();           //needed to the Q
    int DeleteFromHead();           //needed to the Q
    
        //1. indsert node after given node
    void InsertAfter(int data, int afterData); 
        //2. indsert node before given node
    void InsertBefore(int data, int beforeData); 	
        //3. get number of nodes 
    int GetCount();
        //4. get data in the given
    int GetDataByIndex(int index);
        //5. Remove All Nodes
    void RemoveALL(int data);
        //6. Print the list
    void PrintList();    
};

