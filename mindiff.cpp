#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,6,9,1,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n-1; i++){
        for (int j = 0; j < n-1; j++)
        {
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    
    int m=3;
    int minDiff=arr[2]-arr[0];
    for (int i = 1; i+m-1< n; i++)
    {
        int diff = arr[i+m-1]-arr[i];
        if(diff<minDiff){
            minDiff=diff;
        }
    }
    cout<<endl<<minDiff;
    return 0;
}