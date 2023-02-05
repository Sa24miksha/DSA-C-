//Swapping the number or the elememts of an array


#include<iostream>
using namespace std;

void printArray(int arr[] , int n){
    /*this process involves printing the array will be same in max question*/
    for (int i = 0; i<n ; i++)
    {
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    
}

void swapAlternate(int arr[] , int size){

    /*login of swapping, i for index of array*/

    for (int i = 0; i < size; i+=2)
    {
        if (i+1<size)
        {
            swap(arr[i] , arr[i+1]);
        }
        
    }
    
}

int main(){
int even[6]={5,6,1,8,7,3};
int odd[5]={4,6,2,0,7};

swapAlternate(even , 6);
printArray(even , 6);

cout<<endl;

swapAlternate(odd , 5);
printArray(odd , 5);


return 0;
}