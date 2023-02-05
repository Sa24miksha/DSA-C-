//question.7 : print the pattern in a manner such that row number is equal to the values !!

#include<iostream>
using namespace std;

int main(){
int n;
cout<<"enter the value of n"<<endl;
cin>>n;

int i/*(row)*/=1;

while(i<=n){
    int j /*column*/ = 1;
    while (j<=i){
        cout<<i;
        j=j+1;
    }
     cout<<endl;
     i=i+1;
    }
   
return 0;
}