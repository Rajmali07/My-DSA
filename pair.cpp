#include<iostream>
#include<list>
#include<vector>
#include<deque>
using namespace std;
int main(){
    // pair<string, int> p={"Raj", 20};
    // cout<<p.first<<endl;
    // cout<<p.second<<endl;

    // pair<int, pair<string, int>> p={10, {"Raj", 20}};
    // cout<<p.first<<endl;
    // cout<<p.second.first<<" "<<p.second.second<<endl;
    
    vector<pair<string, int>> vec = {{"Raj",20}, {"Annu",22}, {"Amit",22}};
    vec.push_back({"Aarsi", 26});
    vec.emplace_back("Aarsi", 26);
    // for(pair<string,int> p : vec){
    //     cout<<p.first<<" "<<p.second<<endl;
    // }
    for(auto p : vec){
        cout<<p.first<<" "<<p.second<<endl;
    }
    return 0;
}