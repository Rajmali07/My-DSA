#include<iostream>
#include<list>
#include<vector>
#include<queue>
using namespace std;
int main(){
    // for reverse priority
    priority_queue<int, vector<int>, greater<int>> q;

    // for priority based
    // priority_queue<int> q;
    q.push(1);
    q.push(11);
    q.push(9);
    q.push(4);
    q.push(5); 

    // all other operations of priority_queue is similar as stack and queue


    while(!q.empty()){
        cout<<q.top()<<" ";
        q.pop();
    }
    cout<<endl;
}