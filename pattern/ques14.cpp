// question 14: print the pattern of the alphabet taking the input from the user in the following manner
//i/p = 3
//o/p=
//       A B C 
//       B C D 
//       C D E 



#include<iostream>
using namespace std;

int main(){
int n;
cout<<"enter the value of n"<<endl;
cin>>n;
int i=1;
while(i<=n){
    int j=1;
    while (j<=n)
    {
        char ch= 'A' + i + j - 2;
        cout<<ch;
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}
return 0;
}