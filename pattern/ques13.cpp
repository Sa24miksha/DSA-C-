// question 13: print the pattern of the alphabet taking the input from the user such that number of rows = number of columns.
//i/p = 4
//o/p=
//       A B C D
//       E F G H
//       I J K L
//       M N O P

#include<iostream>
using namespace std;

int main(){
int n;
cout<<"enter the value of n"<<endl;
cin>>n;

int i=1;
char start = 'A';
while (i<=n)
{
   int j=1;
   while (j<=n)
   {
    cout<<start;
    start = start+1;
    j=j+1;
   }
   cout<<endl;
   i=i+1;
}

return 0;
}