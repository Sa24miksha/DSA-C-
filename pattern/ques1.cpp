//NOTE :- In all the questions in this folder , i=row anf j=column

// question 1 : pattern to print 1 to n numbers in rows and columns  

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n; 
    int i=1; 
    while(i<=n){
        int j=1;
        while(j<=n){
        cout<<i; 
        j=j+1;  
        }
         cout<<endl;
         i=i+1;   
    }
      
    
}