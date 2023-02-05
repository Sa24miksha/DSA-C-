/*question :- Searching an element in an array*/
/*Concept :- Linear Search*/

#include<iostream>
using namespace std;
bool search( int arr[] , int size , int key){
for (int i = 0; i < size; i++)
{
    if (arr[i]==key)
    {
        return 1;
    }
    
}
return 0;
}

int main(){
int Arr[10]={8,6,-2,4,10,24,-19,50,100,89};
int key;
cout<<"enter the element you want to search in the array"<<endl;
cin>>key;
bool found = search(Arr,10,key);
if (found)
{
    cout<<"key is present"<<endl;
    
}
else{
    cout<<"key is absent"<<endl;
}
return 0;
}
