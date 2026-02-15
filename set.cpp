#include<iostream>
#include<list>
#include<vector>
#include<queue>
#include<map>
#include<unordered_map>
#include<set>
#include<unordered_set>
using namespace std;
int main(){
    // set<int> s;
    // s.emplace(2);
    // s.emplace(1);
    // s.emplace(3);

    // // s.emplace(2);
    // s.emplace(1);

    // cout<<"Lower bound: "<<*(s.lower_bound(2))<<endl;
    // cout<<"upper bound: "<<*(s.upper_bound(2))<<endl;
    // // cout<<"Lower bound: "<<*(s.lower_bound(2))<<endl;//if value is not present and also there is not any greater value then that value then it gives val.end() i.e=0

    // for(auto val: s){
    //     cout<<val<<" ";
    // }
    // cout<<endl;

    // // Multiset
    // multiset<int> s;
    // s.emplace(2);
    // s.emplace(1);
    // s.emplace(3);

    // s.emplace(2);
    // s.emplace(1);

    // for(auto val: s){
    //     cout<<val<<" ";
    // }
    // cout<<endl;

    // Unordered set
    unordered_set<int> s;
    s.emplace(2);
    s.emplace(1);
    s.emplace(3);

    s.emplace(2);
    s.emplace(1);

    for(auto val: s){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}