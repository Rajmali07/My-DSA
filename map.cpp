#include<iostream>
#include<list>
#include<vector>
#include<queue>
#include<map>
#include<unordered_map>
using namespace std;
int main(){
    // map<string,int> m;
    
    // m["camera"]=100;
    // m["tv"]=50;
    // m["tablet"]=150;
    // m["headphone"]=200;
    // m["watch"]=60;

    // m.insert({"mouse", 50});
    // m.emplace("mouse", 50);

    // m.erase("watch");

    // for(auto p: m){
    //     cout<<p.first<<" "<<p.second<<endl;
    // }
    // cout<<endl;

    // cout<<"count = "<<m["tablet"]<<endl;
    // cout<<"count = "<<m.count("tablet")<<endl;

    // if(m.find("mouse")!=m.end()){
    //     cout<<"found\n"<<endl;
    // }else{
    //     cout<<"not found";
    // }

    // Multi map
    // multimap<string, int> mm;

    // mm.emplace("tv", 100);
    // mm.emplace("tv", 100);
    // mm.emplace("tv", 100);
    // mm.emplace("tv", 100);

    // // mm.erase("tv");

    // mm.erase(mm.find("tv"));

    // for(auto val: mm){
    //     cout<<val.first<<" "<<val.second<<endl;
    // }

    // Unodered Map
    unordered_map<string,int> um;
    um.emplace("tv", 150);
    um.emplace("camera", 250);
    um.emplace("mouse", 10);

    for(auto val: um){
        cout<<val.first<<" "<<val.second<<endl;
    }
    return 0;
}