// question 12: print the pattern of the alphabet taking the input from the user such that every column has the same letter starting from A.
//i/p = 4
//o/p,=
//       A B C D
//       A B C D
//       A B C D
//       A B C D

#include<iostream>
using namespace std;

int main(){
int n;
cout<<"enter the value of n"<<endl;
cin>>n;
int i = 1;
while (i<=n)
{
    int j= 1;
    while(j<=n){
        char ch = 'A' + j -1;
        cout<<ch;
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}

return 0;
}