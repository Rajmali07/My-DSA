#include<iostream>
#include<vector>
using namespace std;
vector<int> pairSum(vector<int> vec, int target){
    vector<int> vec1;
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = i+1; j < vec.size(); j++)
        {
            if(vec[i]+vec[j]==target){
                vec1.push_back(i);
                vec1.push_back(j);
                return vec1;
            }
        }
        
    }
    return vec1;
}
int main(){
    vector<int> vec={2,9,8,3,5,4};
    int target=6;

    vector<int> vec1 = pairSum(vec, target);
    cout<<vec1[0]<<","<<vec1[1]<<endl;
    return 0;
}