// // Tail recursion
// #include<iostream>
// using namespace std;
// int fun(int n){
//     if(n>0){
//         cout<<n;
//         fun(n-1);
//     }
//     return 0;
// }
// int main(){
//     int x=5;
//     fun(x);
//     return 0;
// }

// // Head recursion
// #include<iostream>
// using namespace std;
// int fun(int n){
//     if(n>0){
//         fun(n-1);
//         cout<<n;
//     }
//     return 0;
// }
// int main(){
//     int x=5;
//     fun(x);
//     return 0;
// }

// // Tree recursion
// #include<iostream>
// using namespace std;
// int fun(int n){
//     if(n>0){
//         cout<<n;
//         fun(n-1);
//         cout<<n*2;
//         fun(n-1);
//     }
//     return 0;
// }
// int main(){
//     int x=5;
//     fun(x);
//     return 0;
// }

// // Indirect Recursion Example
// #include <iostream>
// using namespace std;

// void fun(int n);   // Forward declaration
// void fun1(int n);  // Forward declaration

// void fun(int n) {
//     if (n > 0) {
//         cout << n << " ";   // Print n
//         fun1(n - 1);        // Call fun1
//     }
// }

// void fun1(int n) {
//     if (n > 0) {
//         cout << n << " ";   // Print n
//         fun(n / 2);         // Call fun
//     }
// }

// int main() {
//     int x = 5;
//     fun(x);   // Start recursion
//     return 0;
// }

// Nested Recursion
#include<iostream>
using namespace std;
int fun(int n){
    if(n>100){
    return n-10;
    }else{
        return fun(fun(n+11));
    }
}
int main(){
    fun(95);
}