#include<iostream>
#include<vector>
#include<list>
#include<stack>
using namespace std;
int main(){
    stack<int> s;
    s.push(5);
    s.push(6);
    s.push(2);
    s.push(8);
    s.push(7);

    stack<int> s2;
    s2.swap(s);
    cout<<s.size()<<endl;
    cout<<s2.size()<<endl;
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;

}