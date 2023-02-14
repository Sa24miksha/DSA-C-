//Insertion at Doubly LinkedList 

#include<iostream>
using namespace std;
class Node{
public :
int data;
Node* next;
Node* prev;

//constructor

Node(int d){
this -> data = d;
this -> next = NULL;
this -> prev = NULL;
}
};

//traversing
void print(Node* &head){
Node* temp = head;
while(temp != NULL){
cout<< temp -> data <<" ";
temp = temp -> next;
}
cout<<endl;
}

//insertion at head
void InsertAtHead(Node* &head, int d){
Node* temp = new Node(d);
temp -> next = head;
head -> prev = temp;
head = temp;
}


//insertion at tail
void InsertAtTail(Node* &tail, int d){
Node* temp = new Node(d);
tail -> next = temp;
temp -> prev = tail;
tail = temp;
}

//insertion at any specific position
void InsertAtPosition(Node* &head, Node* &tail, int position, int d){

//insert at first position
 if(position == 1){
InsertAtHead(head, d);
return;
}
     
Node* temp = head;
int cnt =1;
while(cnt < position-1){
temp = temp ->next;
 cnt ++;
 }

//insert at last position
 if(temp -> next == NULL){
 InsertAtTail(tail, d);
return;
}

Node* NodeToInsert = new Node(d);
NodeToInsert -> next = temp -> next;
 temp -> next -> prev = NodeToInsert;
 temp -> next = NodeToInsert;
 NodeToInsert -> prev = temp;
}

int main(){
Node* node1 = new Node(10);
Node* head = node1;
Node* tail = node1;
// print(head);

InsertAtHead(head, 20);
// print(head);

InsertAtHead(head, 30);
// print(head);

InsertAtHead(head, 40);
print(head);

InsertAtTail(tail, 50);

InsertAtTail(tail, 60);

InsertAtTail(tail, 70);

InsertAtPosition(head,tail,6,80);

InsertAtPosition(head,tail,6,90);

InsertAtPosition(head,tail,6,80);
print(head);
return 0;
}