//Creating a doubly linkedlist

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
        cout<<temp -> data;
        temp = temp -> next;
    }
    cout<<endl;
}
int main(){
Node* node1 = new Node(10);
Node* head = node1;
Node* prev = node1;
print(head);

return 0;
}