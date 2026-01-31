// // Factorial of natural number using loop
// #include<iostream>
// using namespace std;
// int fun(int n){
//     int factorial=1;
//     for (int i = 1; i <= n; i++){
//         factorial*=i;}
//     return factorial;
// }
// int main(){
//     int x=5;
//     cout<<fun(x);
//     return 0;
// }

// Factorial of natural number using recursion formula
#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0){
        return 1;
    }else{
        return factorial(n-1)*n;
    }
}
int main(){
    int x=5;
    cout<<factorial(x);
    return 0;
}