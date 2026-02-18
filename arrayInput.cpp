#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of n: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array element: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Array elements are: ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}