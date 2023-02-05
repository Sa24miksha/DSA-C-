                                        /*Reverse an array*/

#include<iostream>
using namespace std;
void reverse(int arr[], int n){
    int start = 0;
    int end = n-1;
    while (start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    
}

void printArray(int arr[] , int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
int arr[7]={1,55,74,96,35,20,5};
int brr[6]={10,5,6,87,4,0};

reverse(arr , 7);
reverse(brr , 6);

printArray(arr,7);
printArray(brr,6);

return 0;
}