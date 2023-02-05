//Question 1:- Print prime numbers between 2 given numbers taking from the users.

#include<iostream>
#include<math.h>
using namespace std;
bool isPrime(int num){
for (int i=2; i<=sqrt(num); i++)
{
    if (num%i==0)
    {
        return false;
    }
    
}
return true;
}

int main(){
int a,b;
// cout<<"enter the value of a and b"<<endl;
cin>>a>>b;
for(int i=0 ; i<=b ; i++){
    if (isPrime(i))
    {
       cout<<i<<endl;
    }
    
}
return 0;
}