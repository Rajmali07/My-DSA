// Shift left in array
#include<iostream>
using namespace std;
int main(){
    int arr[]= {5,6,8,2,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int temp = arr[0];
    for(int i=0; i<n-1; i++){
        arr[i] = arr[i+1];
    }
    arr[n-1]=temp;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}