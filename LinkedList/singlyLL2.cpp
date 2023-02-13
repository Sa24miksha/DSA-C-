// Insertion in SinglyLinkedList :)

#include<iostream>
#include<map>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

//constructor
Node(int data){
    this -> data=data;
    this -> next=NULL;
}

};

//insertion at haed
void InsertAtHead(Node* &head, int d){

//new node creation
Node* temp = new Node(d);
temp -> next = head;
head = temp;
}

//insertion at tail
void InsertAtTail(Node* &tail, int d){
    //new node creation
    Node* temp = new Node(d);
    tail -> next = temp;
    temp = tail;
}

// traversing
void print(Node* &head){
    if(head==NULL){
    cout<< "list is empty" <<endl;
    }
    Node* temp = head;

    while(temp != NULL){
        cout<< temp -> data <<" "<<endl;  
        temp = temp -> next;
        }
        cout<<endl;
}

//insert at any position
void InsertAtPosition(Node* &tail, Node* &head, int position, int d){

    // insert at start
    if(position==1){
        InsertAtHead(head , d);
        return;
    }


    // specific position
    Node* temp = head;
    int cnt = 1;
    while(cnt < position-1){
        temp = temp -> next;
        cnt ++;
    }

    // insertion at last position 
    if(temp -> next == NULL){
        InsertAtTail(tail,d);
        return;
    }

    // creating a node for data d
    Node* NodeToInsert = new Node(d);
    NodeToInsert -> next = temp -> next;
    temp -> next = NodeToInsert;
    
}

int main(){

//the first node of the linkedlist
Node* node1 = new Node(10);
// cout<< node1 -> data <<endl;
// cout<< node1 -> next <<endl; 

// at first , the head and the tail will be pointing to 1st node of the linked list itself ..... hence 
Node* head = node1;
Node* tail = node1;
// print(head);

//calling InsertAtHead
InsertAtHead(head,15);
// print(head);

//calling InsertAtTail
InsertAtTail(tail, 22);
InsertAtTail(tail, 66);

InsertAtPosition(tail,head,3,80);

print(head);

return 0;
}