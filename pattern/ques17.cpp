// question 17: print the pattern of the alphabet in the form of triangle taking the input from the  user
//i/p = 4
//o/p=
//       D
//       C D
//       B C D 
//       A B C D


#include<iostream>
using namespace std;

int main(){
int n;
cout<<"enter the value of n"<<endl;
cin>>n;

int i=1;
while(i<=n){
    int j=1;
    char start = 'A' + n - i;
    while (j<=i)
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