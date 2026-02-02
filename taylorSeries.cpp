// // Tailor series using recursion
// #include<iostream>
// using namespace std;
// double e(int x, int n){
//     static double p=1, f=1;
//     double r;

//     if(n==0)
//     return 1;
//     r=e(x,n-1);
//     p=p*x;
//     f=f*n;
//     return r+p/f;
// }
// int main(){
//     cout<<e(1,10);
//     return 0;
// }

// // using iterative
// #include <iostream>
// using namespace std;

// double e_iterative(int x, int n) {
//     double sum = 1.0;   // first term
//     double term = 1.0;  // current term (x^k / k!)

//     for (int i = 1; i <= n; i++) {
//         term = term * x / i;  // compute next term
//         sum += term;
//     }
//     return sum;
// }

// int main() {
//     cout << e_iterative(1, 10);  // approximation of e^1
//     return 0;
// }

//2
#include<iostream>
using namespace std;
double e(int x, int n){
    static double s;
    if(n==0)
    return s;
    s=1+x*s/n;
    return e(x,n-1);
}
int main(){
    cout<<e(1,10);
    return 0;
}