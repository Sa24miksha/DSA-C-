//Parameterised constructor

#include<iostream>
using namespace std;
class Hero{

private:
int health;

public:
char level;
Hero(){
    cout<<"constructor called"<<endl;
}
//paramaterised constructor
Hero(int health){
    cout<<"this ->"<<this<<endl;
    this->health=health;
}

int gethealth(){
    return health;
}
char getlevel(){
    return level;
}
 
void sethealth(int h){
    health=h;
}
void setlevel(char ch){
    level=ch;
}

};

int main(){
Hero samiksha(10);

//statically
cout<<"address of samiksha"<<&samiksha<<endl;
samiksha.gethealth();

//dynamically
Hero*h = new Hero(11) ;
return 0;
}