#include<iostream>
using namespace std;
int main(){
    int *p, *q;
    int i;
    p=new int[5];
    q=new int[10];
    p[0]=10, p[1]=2, p[2]=4, p[3]=6, p[4]=8;
    cout<<"Before increase size of array.";

    for (int i = 0; i < 5; i++)
        q[i]=p[i];

    delete[] p;
    p=q;
    q=NULL;

    cout<<"After increasing the size of array";
    for (int i = 0; i < 10; i++)
    {
        cout<<p[i]<<endl;
    }
    
    return 0;
}