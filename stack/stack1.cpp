/*Implementation of stack using STL*/

#include<iostream>
#include<stack>
using namespace std;

int main(){
stack<int> s;
s.push(2);
s.push(4);
s.push(6);
s.pop();
cout<<"printing the top most element"<<" "<<s.top()<<endl;
if(s.empty()){
    cout<<"stack is empty"<<endl;
}
else{
    cout<<"stack is not empty"<<endl;
}
cout<<"size of stack is"<<"     "<<s.size()<<endl;
return 0;
}