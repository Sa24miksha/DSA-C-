//Access modifiers :- there are three types of access modifiers 
// 1. Public
// 2. private
// 3. protected 


//Accessing the properties/Data members using "."(dot) operator .

#include<iostream>
using namespace std;
class Hero{


    // properties or data members
    public: /*if we will not keep the prop. inside the public then error will come*/
    int health;

};


int main(){

Hero samiksha;

cout<<"health is : "<<samiksha.health <<endl;


return 0;
} 