//question.4 print the number in a manner such that row number = no. of values that are input in it 

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    int i=1;
    int count=1;
    while(i<=n){
        int j=1; //so that tha number we are printing is equal to the column number 
        while(j<=i){ //(col<=row)
            cout<<count<<" ";
            count=count+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }

return 0;
}