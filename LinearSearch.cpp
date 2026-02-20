#include<iostream>
#include<vector>
using namespace std;
int SearchTarget(vector<int> vec, int target){
    for (int i = 0; i < 5; i++)
    {
        if(vec[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    vector<int> vec={1,2,3,4,5,6};
    cout<<SearchTarget(vec, 5);
    return 0;
}