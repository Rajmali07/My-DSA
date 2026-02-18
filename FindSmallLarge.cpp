#include<iostream>
using namespace std;
int main(){
    int arr[]={5,6,7,3,9};

    cout<<"Array elements are: ";
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int smallest = arr[0];
    for (int i = 0; i < 5; i++)
    {   
        smallest = min(arr[i], smallest);
        // if(arr[i]<smallest){
        //     smallest = arr[i];
        // }
    }
    cout<<"Smallest number is : "<<smallest<<endl;

    int largest = arr[0];
    for (int i = 0; i < 5; i++)
    {
        largest = max(arr[i],largest);
        // if(arr[i]>largest){
        //     largest = arr[i];
        // }
    }
    cout<<"largest number is : "<<largest<<endl;
    
    return 0;
}