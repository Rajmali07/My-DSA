// // Using recursion
// #include<iostream>
// using namespace std;
// int fib(int n){
//     if(n<=1){
//         return n;
//     }else{
//         return fib(n-2)+fib(n-1);
//     }
// }
// int main(){
//     cout<<fib(10);
//     return 0;
// }

// // Using iteration
// #include<iostream>
// using namespace std;
// int fib(int n){
//     int t0=0, t1=1, s=0, i;
//     if(n<=1) return n;
//     for (int i = 2; i <= n; i++)
//     {
//         s=t0+t1;
//         t0=t1;
//         t1=s;
//     }
//     return s;
// }
// int main(){
//     cout<<fib(10);
//     return 0;
// }

// Using memoization
#include <iostream>
using namespace std;

int F[50]; // bigger size for safety

int mfib(int n) {
    if (n == 0 || n == 1) {
        return n;
    }
    if (F[n] != -1) {
        return F[n];
    }
    F[n] = mfib(n - 1) + mfib(n - 2);
    return F[n];
}

int main() {
    // initialize memoization array
    for (int i = 0; i < 50; i++) {
        F[i] = -1;
    }
    cout << mfib(10);
    return 0;
}