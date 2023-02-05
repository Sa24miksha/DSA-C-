/*FINDING UNIQUE ELEMENT*/  


/*You have given an integer arraylist(APR) of size N. Where N is equal to [2M + 1]. Now in the given array/list . 'M' number are present twice and one number is present only once .
You need to find and return that number which is unique in the array/list */

#include<iostream>
using namespace std;

int findUniqueElement(int arr[] , int size){
    int ans = 0;

    for (int i = 0; i < size; i++)
    {
        ans = ans^arr[i];
    }
    return ans;
}

int main(){
int array[5]={5,6,7,5,6};
findUniqueElement(array , 5);
return 0;
}

