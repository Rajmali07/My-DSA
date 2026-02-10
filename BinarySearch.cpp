// // Iterative method
// #include<iostream>
// using namespace std;
// struct Array{
//     int A[20];
//     int size;
//     int length;
// };
// void Display(struct Array arr){
//     int i;
//     cout<<"Elements are : ";
//     for (int i = 0; i < arr.length; i++)
//     {
//         cout<<arr.A[i]<<" ";
//     }
// }
// int BinarySearch(struct Array arr, int key){
//     int l=0, mid, h=arr.length-1;
//     while(l<=h){
//         mid=(l+h)/2;
//         if(key==arr.A[mid])
//         return mid;
//         else if(key<arr.A[mid])
//         h=mid-1;
//         else
//         l=mid+1;
//     }
//     return -1; 
// }
// int main(){
//     struct Array arr={{2,3,5,9,7},20,5};
//     cout<<BinarySearch(arr,5)<<endl;
//     Display(arr);
//     return 0;
// }

// Recursive method
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
int BinarySearch(int a[], int l, int h, int key){
    int mid;
    if(l<=h){
        mid=(l+h)/2;
        if(key==a[mid])
        return mid;
        else if(key<a[mid])
        return BinarySearch(a,l,mid-1,key);
        else
        return(a,mid+1,h,key);
    }
    return -1; 
}
int main(){
    struct Array arr={{2,3,5,9,7},20,5};
    cout<<BinarySearch(arr.A,0,arr.length,5)<<endl;
    Display(arr);
    return 0;
}