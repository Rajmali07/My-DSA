#include<iostream>
using namespace std;
int main(){
    int arr1[]={10,5,9,7,3};
    cout<<"Print static array"<<endl;
    for (int  i = 0; i < 5; i++)
    {
        cout<<arr1[i]<<endl;
    }
    
    int *p;
    p=new int[5];
    p[0]=6;
    p[1]=45;
    cout<<"Print dynamic array"<<endl;
    for (int i = 0; i < 5; i++)
    {   
        cout<<p[i]<<endl;
    }
    delete[] p;
    return 0;
    
}