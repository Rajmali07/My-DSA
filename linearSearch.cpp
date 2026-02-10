#include<iostream>
using namespace std;
struct Array{
    int A[20];
    int size;
    int length;
};
void Display(struct Array arr){
    int i;
    cout<<"Elements are : ";
    for (int i = 0; i < arr.length; i++)
    {
        cout<<arr.A[i]<<" ";
    }
}
int linear1(struct Array arr, int x){
    for (int i = 0; i < arr.length; i++)
    {
        if(x==arr.A[i]){
            return i;
        }
    }
    return -1;
    
}
int main(){
    struct Array arr={{2,3,5,9,7},20,5};
    int index=linear1(arr,5);
    if(index != -1)
        cout << "Element found at index " << index << endl;
    else
        cout << "Element not found" << endl;

    Display(arr);
    return 0;
}