//CONSTRUCTOR :- Calling dynamically 
#include<iostream>
using namespace std;
class hero{
    //properties 
    private:
    int Health;
    public:
    char level;
    hero(){
        cout<<"constructor called"<<endl;
    }
    int getHealth(){
        return Health;
    }
    char getlevel(){
        return level;
    }
    void setHealth(int h){
        Health = h;
    }
    void setlevel(char ch){
        level = ch;
    }
};

int main(){
    //object created statically
// cout<<"hi"<<endl;
hero samiksha;
// cout<<"hello"<<endl;

// //object created dynamically
hero *h= new hero;
return 0;
}