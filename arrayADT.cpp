// method 1
// #include<iostream>
// using namespace std;
// struct Array{
//     int *A;
//     int size;
//     int length;
// };
// void Display(struct Array arr){
//     int i;
//     cout<<"Elements are : ";
//     for (int i = 0; i < arr.length; i++)
//     {
//         cout<<arr.A[i];
//     }
// }
// int main(){
//     struct Array arr;
//     int n,i;
//     cout<<"Enter size of an array :";
//     cin>>arr.size;
//     arr.A=new int [arr.size];
//     arr.length = 0;

//     cout<<"Enter number of numbers :";
//     cin>>n;

//     cout<<"Enter all elements : ";
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr.A[i];
//     }
//     arr.length=n;
//     Display(arr);

//     return 0;
// }

// method 2
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
int main(){
    struct Array arr={{2,3,5,9,7},20,5};
    
    Display(arr);

    return 0;
}