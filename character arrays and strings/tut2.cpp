// question 2 :- reverse a string
#include<iostream>
using namespace std;

void reverse(char name[], int n){
int s=0;
int e= n-1;
while(s<e){
  swap(name[s++], name[e--]);
}


}
int GetLength(char name[]){
    int count = 0;
    for(int i=0; name[i] != '\o'; i++){
        count++;
    }
    return count;
}

int main(){
char name[20];
cout<<"enter the name"<<endl;
cin>>name;
int len=GetLength(name);
cout<<"length is"<<len<<endl;
reverse(name,len);
cout<<"your name is"<<name<<endl;

return 0;
}