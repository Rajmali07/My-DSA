// Pass by value
#include<iostream>
using namespace std;
void swapValue(int a, int b){
    int temp=a;
    a=b;
    b=temp;
}
void swapReference(int &a, int &b){
    int temp=a;
    a=b;
    b=temp;
}
int main(){
    int x=10,y=5;
    swapValue(x,y);
    cout<<"After Swap value of X = "<<x<<" and y = "<<y<<endl;
    
    swapReference(x,y);
    cout<<"After Reference value of X "<<x<<" and y= "<<y<<endl;

    return 0;
}