#include<iostream>
using namespace std;
void InsertionSort(int arr[], int n){
    for (int i = 1; i < n; i++)
    {
        int curr = arr[i];
        int prev = i-1;       //  < for descending order
        while(prev>=0 && arr[prev]>curr){
            arr[prev+1] = arr[prev];
            prev--;
        }
        arr[prev+1]=curr;
    }
    
}
void getInfo(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[]={4,1,5,2,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    InsertionSort(arr,n);
    getInfo(arr, n);
    return 0;
    
}