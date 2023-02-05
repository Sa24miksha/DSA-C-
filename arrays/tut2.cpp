                                        /*ARRAY WITH FUNCTIONS*/


#include<iostream>
using namespace std;

void printArray(int arr[] , int size){
cout<<"printing the array"<<endl;
//print the array

for(int i=0; i<size; i++)
{
    cout<<arr[i]<<" ";
}
cout<<"printing done!"<<endl;

}
int main(){




                                            /*CASE 1*/
int one[15] = {5,7};

int n=15;
printArray(one,15);

/*Printing the size of the array*/
int onesize = sizeof(one)/sizeof(int);
cout<<"size of forth is"<<onesize<<endl;


                                            /*CASE 2*/
                            /*initialising all the location with zero*/
                            
int two[10]= {0};

n=10;
printArray(two,10);

/*Printing the size of the array*/
int twosize = sizeof(two)/sizeof(int);
cout<<"size of forth is"<<twosize<<endl;


                                





cout<<"everything is fine"<<endl;




return 0;
}