#include<iostream>
#include<vector>
using namespace std;
vector<int> pairSum(vector<int> vec, int target){
    vector<int> vec1;
    int n = vec.size();
    int i = 0, j=n-1;
    while(i<j){
        int pairSum = vec[i]+vec[j];
        if(pairSum>target){
           j--; 
        }else if(pairSum<target){
            i++;
        }else{
            vec1.push_back(i);
            vec1.push_back(j);
            return vec1;
        }
    }
    return vec1;
}
int main(){
    vector<int> vec={2,4,6,8,10};
    int target=14;

    vector<int> vec1 = pairSum(vec, target);
    cout<<vec1[0]<<","<<vec1[1]<<endl;
    return 0;
}