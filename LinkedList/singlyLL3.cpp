#include<iostream>
#include<map>
using namespace std;
class Node{
public:
int data;
Node* next;

//Constructor
Node(int data){
    this -> data = data;
    this -> next = NULL;
}

//Distructor :- to delete the node

~Node(){
    //in a variable "value" we will add the data of the data which we want to delete
    int value = this -> data;

    //memory free
    if(this -> next != NULL){
        delete next;
        this -> next = NULL;
    }
    cout<< "memory is feee from the node with data " << value << endl;
}


};

//****************************************************DINSWRTION *******************************************************//



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

//****************************************************DELETION *******************************************************//

void DeleteNode(int position, Node* &head){

//deleting first or start node
if(position==1){
Node* temp = head;
head = head -> next;

// start node ko memory free kardo
temp -> next = NULL;
delete temp;
}


else{
//deleting any middle or last node
Node* curr = head;
Node* prev = NULL;

int cnt = 1;
while(cnt < position){
    prev = curr;
    curr = curr -> next;
    cnt++;
}

prev -> next = curr -> next;
curr -> next = NULL;
delete curr;
}

}


int main(){
Node* node1 = new Node(10);
Node* head = node1;
Node* tail = node1;
InsertAtHead(head,15);
// print(head);

//calling InsertAtTail
InsertAtTail(tail, 22);
InsertAtTail(tail, 66);

InsertAtPosition(tail,head,3,80);
cout << "head " << head -> data << endl;
cout << "tail " << tail -> data << endl;
deleteNode(4, head);

tail -> next = head ->next;

cout << "head " << head -> data << endl;
cout << "tail " << tail -> data << endl;
print(head);
return 0;
}