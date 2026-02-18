#include<iostream>
using namespace std;
int sum1(int arr[]){
    int sum=0;
    for (int i = 0; i < 5; i++)
    {
        sum+=arr[i];
    }
    return sum;
}
int product1(int arr[]){
    int product=1;
    for (int i = 0; i < 5; i++)
    {
        product*=arr[i];
    }
    return product;
}
int main(){
    int arr[]={5,6,7,3,9};

    cout<<sum1(arr);
    cout<<endl;
    cout<<product1(arr);

    return 0;
}