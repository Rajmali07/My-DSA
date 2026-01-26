// // Pass by value
// #include<iostream>
// using namespace std;

// void swap(int a, int b){
//     int temp;
//     temp=a;
//     a=b;
//     b=temp;
// }
// int main(){
//     int x=10, y=5;
//     swap(x,y);
//     cout<<x<<endl;
//     cout<<y<<endl;
//     return 0;
// }


// // Pass by address
// #include<iostream>
// using namespace std;

// void swap(int *a, int *b){
//     int temp;
//     temp=*a;
//     *a=*b;
//     *b=temp;
// }
// int main(){
//     int x=10, y=5;
//     swap(&x,&y);
//     cout<<x<<endl;
//     cout<<y<<endl;
//     return 0;
// }

// // Pass by referance
// #include<iostream>
// using namespace std;

// void swap(int &a, int &b){
//     int temp;
//     temp=a;
//     a=b;
//     b=temp;
// }
// int main(){
//     int x=10, y=5;
//     swap(x,y);
//     cout<<x<<endl;
//     cout<<y<<endl;
//     return 0;
// }

// Structure as parameter

// Call by value
// #include<iostream>
// using namespace std;
// struct Rectangle{
//     int length;
//     int breadth;
// };
// void fun(struct Rectangle r1){
//     r1.length=20;
//     cout<<r1.length<<" "<<r1.breadth<<endl;
// }
// int main(){
//     Rectangle r={10,5};
//     fun(r);
//     cout<<r.length<<" "<<r.breadth;
//     return 0;
// }

// // 2
// #include<iostream>
// using namespace std;
// struct Rectangle{
//     int length;
//     int breadth;
// };
// int area(struct Rectangle r1){
//     // r1.length++;
//     return r1.length*r1.breadth;
// }
// int main(){
//     Rectangle r={10,5};
//     area(r);
//     cout<<area(r)<<endl;
//     cout<<r.length<<" "<<r.breadth;
//     return 0;
// }

// // Call by address
// #include<iostream>
// using namespace std;
// struct Rectangle{
//     int length;
//     int breadth;
// };
// void fun(struct Rectangle *r1){
//     r1->length=20;
//     cout<<r1->length<<" "<<r1->breadth<<endl;
// }
// int main(){
//     Rectangle r={10,5};
//     fun(&r);
//     cout<<r.length<<" "<<r.breadth;
//     return 0;
// }

// // 2
// #include<iostream>
// using namespace std;
// struct Rectangle{
//     int length;
//     int breadth;
// };
// int changeLength(struct Rectangle *p, int l){
//     p->length=l;
//     return p->length*p->breadth;
// }
// int main(){
//     Rectangle r={10,5};
//     cout<<changeLength(&r,20);
//     return 0;
// }

// // Creating object in heap
// #include<iostream>
// using namespace std;
// struct Rectangle{
//     int length;
//     int breadth;
// };
// struct Rectangle *fun(){
//     struct Rectangle *p;
//     p = new Rectangle;
//     p->length=10;
//     p->breadth=5;
//     return p;
// }
// int main(){
//     Rectangle *ptr=fun();
//     cout<<ptr->length<<" "<<ptr->breadth<<endl;
//     return 0;
// }

// Structured array as parameter
#include<iostream>
using namespace std;
struct Test{
    int A[5];
    int n;
};
int fun(struct Test &t1){
    t1.A[0]=7;
    return t1.A[0];
}
int main(){
    Test t={{2,4,6,8,10},5};
    fun(t);
    cout<<fun(t);
    return 0;
}