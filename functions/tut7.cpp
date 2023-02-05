//Octal to decimal
/*Simalar to that of binary to decimal just do the following changes*/

#include<iostream>
using namespace std;
int octalToDecimal(int n){  /*change the name of the function*/
    int ans=0;
    int x=1;
    while(n>0){
        int y = n%10;
        ans += x*y;
        x*=8;  /*just change the base from 2 to 8*/
        n/=10;
    }
    return ans;
}
    
int main(){
int n;
cin>>n;

cout<<octalToDecimal(n)<<endl;
return 0;
}