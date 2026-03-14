// Method 1
// #include<iostream>
// using namespace std;
// int pow(int m, int n){
//     if(n==0){
//         return 1;
//     }else{
//         return pow(m,n-1)*m;
//     }
// }
// int main(){
//     int p=pow(2,5);
//     cout<<p;
//     return 0;
// }

// Method 2
#include<iostream>
using namespace std;
int pow(int m, int n){
    if(n==0){
        return 1;
    }else if(n%2==0){
        return pow(m*m,n/2);
    }else{
        return m*pow(m*m,(n-1)/2);
    }
}
int main(){
    int p=pow(2,5);
    cout<<p;
    return 0;
}