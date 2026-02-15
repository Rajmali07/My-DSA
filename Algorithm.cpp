#include<iostream>
#include<list>
#include<vector>
#include<queue>
#include<map>
#include<unordered_map>
#include<set>
#include<unordered_set>
#include<algorithm>
using namespace std;
// bool comparator(pair<int, int>p1, pair<int, int>p2){
//     if(p1.second<p2.second) return true;
//     if(p1.second>p2.second) return false;

//     if(p1.first<p2.first) return true;
//     else return false;
// }
int main(){
    // int arr[7] = {4,2,6,7,3,5,9};
    // sort(arr, arr+7);
    // for(auto val: arr){
    //     cout<<val<<" ";
    // }
    // cout<<endl;

    // vector<int> vec={8,6,3,4,9,7};
    // // For sorting in ascending order
    // // sort(vec.begin(), vec.end());

    // // For sorting in descending order
    // sort(vec.begin(), vec.end(), greater<int>());

    // for(auto val: vec){
    //     cout<<val<<" ";
    // }
    // cout<<endl;

    // sorted according to the first value
    // vector<pair<int, int>> vec={{5,6}, {2,6}, {3,9}};
    // sort(vec.begin(), vec.end());
    // for(auto p: vec){
    //     cout<<p.first<<" "<<p.second<<endl;
    // }

    // // sort according to the second value
    // vector<pair<int, int>> vec={{5,6}, {2,3}, {3,9}};
    // sort(vec.begin(), vec.end(), comparator);
    // for(auto p: vec){
    //     cout<<p.first<<" "<<p.second<<endl;
    // }

    // // For reverse
    // vector<int> vec={1,2,3,4,5};
    // // reverse(vec.begin(), vec.end());

    // // For reversing any specific range or pair
    // reverse(vec.begin()+1, vec.begin()+3);


    // for(auto val: vec){
    //     cout<<val<<" ";
    // }

    // Next permutation
    // string s = "abc";
    // next_permutation(s.begin(), s.end());
    
    // For previous permutation
    // prev_permutation(s.begin(), s.end());
    // cout<<s<<endl;

    // For finding min and max
    // cout<<max(4,5)<<" "<<min(6,1)<<endl;

    // // For swap
    // int a=5, b=10;
    // swap(a,b);
    // cout<<"val of a is: "<<a<<endl<<"val of b is: "<<b<<endl;
    
    // vector<int> vec={4,6,3,8,2};

    // sort(vec.begin(), vec.end());
    // For Binary search (Before binary search we need to sort element first)
    // cout<<binary_search(vec.begin(), vec.end(), 6)<<endl;

    // For finding min and max element
    // cout<<*(min_element(vec.begin(), vec.end()))<<endl;
    // cout<<*(max_element(vec.begin(), vec.end()));
    
    int n=15;
    long int n1=15;
    long long int n2=15;

    cout<<__builtin_popcount(n)<<endl;
    cout<<__builtin_popcountl(n1)<<endl;
    cout<<__builtin_popcountll(n2)<<endl;
    
    return 0;
}