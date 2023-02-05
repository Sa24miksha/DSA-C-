                                           /*TOPIC :- ARRAY*/



#include<iostream>
using namespace std;

int main(){


                                            /*CASE 1*/
//declare
int number[15];

cout<<"value at 0 index"<<" "<<number[0]<<endl; /*at output it will give the garbage value*/
// cout<<"value at 1 index"<<" "<<number[1]<<endl; /*at output it will give the garbage value*/
// cout<<"value at 2 index"<<" "<<number[2]<<endl; /*at output it will give the garbage value*/
// cout<<"value at 3 index"<<" "<<number[3]<<endl; /*at output it will give the garbage value*/

/* because array ki value declared ni hai */

/*agar array ka size 15 hai and you are accessing 20th value then it not possible you will be unnable to access it*/

                                            /*CASE 2*/
//initialising the array
int second[3] = {5,7,11};
 
//accessing the value or an element
cout<<"value at 2 index"<<" "<<second[2]<<endl; /*it will print 11*/



                                            /*CASE 3*/
int third[15] = {5,7};
int n=15;
cout<<"printing the array"<<endl;                           /*o/p :- 5,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0*/
//print the array                                           /*in rest all the element 0 will populate*/
for (int i = 0; i<n; i++)
{
    cout<<third[i]<<" ";
}

                                            /*CASE 4*/
                            /*initialising all the location with zero*/
                            
int forth[10]= {0};
n=10;
cout<<"printing the array"<<endl;
//print the array                                            /*o/p :- 0,0,0,0,0,0,0,0,0,0*/
for (int i=0; i<n; i++)                 /*all the value in the give size of the array has the value 0*/
{
    cout<<forth[i]<<" ";
}




cout<<"everything is fine"<<endl;
return 0;
}