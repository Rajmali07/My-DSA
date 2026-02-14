#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec1={1,6,5,2,4,2};
    // Delete specific range
    // vec1.erase(vec1.begin()+2, vec1.begin()+4);
    // vec1.erase(vec1.begin()+2);

    // vector<int> :: iterator it;
    // for (it = vec1.begin(); it != vec1.end(); it++)
    // {
    //     cout<< *(it) <<" ";
    // }

    // 
    
    for (auto it = vec1.begin(); it != vec1.end(); it++)
    {
        cout<< *(it) <<" ";
    }
    

    // vec1.insert(vec1.begin()+2, 50);
    // vec1.clear();
    // cout<<vec1.empty()<<endl; 

    // vector<int> vec2(3,10);
    
    // vector<int> vec3(vec1);

    
    // vector<int> v;
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(4);
    // v.push_back(5);
    // v.emplace_back(6);
    // v.pop_back();

    // cout<<v.size()<<endl;
    // cout<<v.capacity()<<endl;

    // for(int val: vec1){
        // cout<<val<<" ";
    // }
    // cout<<endl;

    // cout<<"value at index 2 is : "<<v[2]<<" or "<<v.at(2);

    // cout<<vec1.front()<<endl<<vec1.back();

    return 0;
}