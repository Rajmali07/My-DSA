#include<iostream>
#include<list>
#include<vector>
using namespace std;
int main(){
    list<int> l={4,6,2,8,9};

    // l.push_back(5);
    // l.push_back(6);
    // l.push_back(7);
    // l.push_front(8);
    // l.push_front(9);
    // l.push_front(10);

    // l.pop_back();
    // l.pop_front();

    for(int val : l){
        cout<<val<<" ";
    }
    cout<<endl;
}