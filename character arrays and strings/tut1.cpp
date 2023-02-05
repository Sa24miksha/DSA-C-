/* strings in c++ is the 1D array*/
// null character is used as a terminator to know where the sring is ending

// question 1 :- length of the string
#include<iostream>
using namespace std;
int GetLength(char name[]){
    int count=0;
    for(int i=0; name[i] !='\o'; i++){
    count++;
    }
    return count;
}

int main(){
char name[20];
cout<<"enter the name"<<endl;
cin>>name;
cout<<"length of the string is"<<GetLength(name)<<endl;
return 0;
}

