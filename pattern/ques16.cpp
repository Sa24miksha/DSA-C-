// question 16: print the pattern of the alphabet in the form of triangle taking the input from the  user
//i/p = 4
//o/p=
//       A
//       B C
//       D E F 
//       G H I J 


#include<iostream>
using namespace std;

int main(){
 int n;
 cout<<"enter the value of n"<<endl;
 cin>>n;

 int i=1;
 while (i<=n)
 {
   int j=1;
   while (j<=i)
   {
    char ch=('A' + i + j- 2);
    cout<<ch;
    j=j+1;
   }
   cout<<endl;
   i=i+1;
 }
return 0;
}