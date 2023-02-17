/*Creating a STACK class*/


#include<iostream>
using namespace std;
class Stack{
//properties
public:
int *arr;
int top;
int size;

//constructor 
Stack(int size){
    this -> size = size;
    arr = new int[size];
    top = -1;
}
//push operation
void push(int element){
if (size-top > 1)
{
top ++;
arr[top]=element;
}
else{
    cout<<"stack overflow"<<endl;
}
}

//pop operation
void pop(){
if (top >=0)
{
top--;
}
else{
    cout<<"stack underflow" <<endl;
}
}

//peek/top element 
int peek (){
    if(top >= 0){
     return arr[top];
    }
    else{
        cout<<"stack is empty"<<endl;
    }
}

//empty or not ?
bool isempty(){
if (top ==-1)
{
    return true;
}
else{
return false;
}
}
}; 

int main(){
Stack st(5);
st.push(5);
st.push(10);
st.push(15);
st.push(20);
st.push(25);

// cout<<st.peek()<<endl;
st.pop();
cout<<st.peek()<<endl;
return 0;
}
