/*Question :- find the sum of the given array*/

#include<iostream>
using namespace std;

int addArr(int arr[],int size){
int sum = 0;
for (int i = 0; i<size; i++)
{
    sum=sum+arr[i];
}

return sum;
}

int main(){
int s;
int Array[5] = {2,3,4,5,6};
s= addArr(Array,5);
cout<<"the additon of the above array is"<<s<<endl;
return 0;
}