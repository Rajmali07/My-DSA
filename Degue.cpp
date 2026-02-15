#include<iostream>
#include<list>
#include<vector>
#include<deque>
using namespace std;
int main(){
    deque<int> d={5,3,4,5,8};
    
    // It includes all operations of list and additionall it allow random access

    cout<<d[3]<<endl;

    for(int val : d){
        cout<<val<<" ";
    }
    return 0;
}