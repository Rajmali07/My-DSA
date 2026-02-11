// #include<iostream>
// #include<vector>
// #include<list>
// using namespace std;
// class Stack{
//     list<int> ll;

//     public:
//     void push(int val){
//         ll.push_front(val);
//     }
//     void pop(){
//         ll.pop_front();
//     }
//     int front(){
//         return ll.front();
//     }
//     bool empty(){
//         return ll.size()==0;
//     }
// };
// int main(){
//     Stack s;

//     s.push(30);
//     s.push(40);
//     s.push(50);

//     while(!s.empty()){
//         cout<<s.front()<<" ";
//         s.pop();
//     }
//     cout<<endl;
//     return 0;
// }


// Using stack as library
#include<iostream>
#include<vector>
#include<stack>
#include<list>
using namespace std;
int main(){
    stack<int> s;

    s.push(30);
    s.push(40);
    s.push(50);

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    return 0;
}