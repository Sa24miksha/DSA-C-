//question . 18 :- print star with spaces 
// i/p :- 4
// o/p :-  _ _ _ *
//         _ _ * *
//         _ * * *
//         * * * *


#include<iostream>
using namespace std;

int main(){
int n;
cout<<"enter the value of n"<<endl;
cin>>n;
int i =1;
while(i<=n){
    // PRINT THE SPACE 

    int space = n - i;
    while(space){
        cout<<" ";
        space = space - 1;
    }
    // PRINT THE STAR
    int j = 1;
    while (j<=i)
    {
        cout<<"*";
        j = j + 1;
    }
    cout<<endl;
        i = i + 1;
}
return 0;
}