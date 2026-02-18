#include<iostream>
using namespace std;
void changeArr(int arr[], int n){
    cout<<"in function\n";
    for (int i = 0; i < n; i++)
    {
        arr[i]=2*arr[i];
    }
}
int main(){
    int arr[]={5,6,7,3,9};
    int n = sizeof(arr[0])/sizeof(arr);

    changeArr(arr, 5);
    cout<<"Array elements are: ";
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}