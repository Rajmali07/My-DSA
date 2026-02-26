#include<iostream>
using namespace std;
int main(){
    string str = "Apple";
    int st = 0;
    int end = str.length()-1;
    while(st<end){
        for (int i = 0; i < str.length(); i++)
        {
            swap(str[st],str[end]);
            st++;
            end--;
        }
        
    }
    for(auto val: str){
        cout<<val<<" ";
    }
    return 0;
}