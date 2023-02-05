// Question no . 23 :- Print the number pattern in the following way :-
// i/p = 4
// o/p =

// _ _ _ 1 _ _ _
// _ _ 2 1 2 _ _
// _ 3 2 1 2 3 _
// 4 3 2 1 2 3 4



#include<iostream>
using namespace std;

int main(){
int n;
cout<<"enter the value of n"<<endl;
cin>>n;

int i = 1;
while(i<=n){

    // PRINT SPACES (FIRST TRIANGLE) 
    int space = n - i;
    while(space){
        cout<<" ";
        space = space - 1;
    }

    // PRINT 2nd TRIANGLE 
    int j=1;
    while (j<=i)
    {
        cout<<j;
        j=j+1;
    }

    // PRINT 3rd TRIANGLE
    
    int start = i - 1;
    while(start){
        cout<<start;
        start = start - 1;
    }
    cout<<endl;
    i = i + 1;
    
}
return 0;
}