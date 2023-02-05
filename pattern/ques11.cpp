// question 11 :- print the pattern of the alphabet taking the input from the user such that every row has same letter.
//example-
//i/p= 4
//o/p= A A A A
 //    B B B B
  //   C C C C
  //   D D D D

#include<iostream>
using namespace std;

int main(){
int n;
cout<<"enter the value of n"<<endl;
cin>>n;

int i=1;
while(i<=n){
    int j=1;
    while (j<=n){
        char ch = 'A' + i - 1;
        cout<<ch;
        j=j+1;
    }

    cout<<endl;
    i=i+1;
}
return 0;
}