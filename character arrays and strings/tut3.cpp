// Question :- Check palindrome 

#include<iostream>
using namespace std;

bool CheckPalindrome(char a[], int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        if(a[s] != a[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
    
};

int main(){
char a[20];
cout<<"enter the name"<<endl;
cin>>a;
cout<<"palindrome or not"<<" "<<CheckPalindrome(a,20)<<endl;
return 0;
}