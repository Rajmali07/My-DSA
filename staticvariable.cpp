// // without static variable function
// #include<iostream>
// using namespace std;
// int fun(int n){
//     if(n>0){
//         cout<<fun(n-1)+n;
//     }
//     return 0;
// }
// int main(){
//     int x=5;
//     cout<<fun(x)<<endl;
//     return 0;
// }

// Static variable function
// #include<iostream>
// using namespace std;

// int fun(int n){
//     static int x=0;
//     if(n>0){
//         x++;
//             cout<<fun(n-1)+n;
//     }
//     return 0;
// }
// int main(){
//     int a=5;
//     cout<<fun(a);
// }

//Global variable in recursion
#include<iostream>
using namespace std;
int x = 0;
int fun(int n){
    if(n>0){
        x++;
            cout<<fun(n-1)+n;
    }
    return 0;
}
int main(){
    int a=5;
    cout<<fun(a);
}
