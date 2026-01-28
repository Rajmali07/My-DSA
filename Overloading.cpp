#include<iostream>
using namespace std;

double area(double radius){
    return 3.14159*radius*radius;
}
int area(int length, int breadth){
    return length*breadth;
}
int main(){
    cout<<"Area of circle is: "<<area(5)<<endl;
    cout<<"Area of Rectangle is :"<<area(5,10)<<endl;
    return 0;
}