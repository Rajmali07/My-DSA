// // Method 1, or Brute Force Approach, O(n^2)
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5};
//     int n=5;
//     int max_sum=-1;
//     for (int st = 0; st < n; st++)
//     {   
//         int curr_sum=0;
//         for (int end = st; end < n; end++)
//         {
//             curr_sum+=arr[end];
//             max_sum=max(curr_sum,max_sum);
//         }
//     }
//     cout<<max_sum;

//     return 0;
    
// }

// Method 2, Kadanes Algorithm, O(n)
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int n=5;
    int max_sum=-1;
    int curr_sum = 0;
    for (int i = 0; i < n; i++)
    {
        curr_sum+=arr[i];
        max_sum=max(arr[max_sum],arr[curr_sum]);
        if(curr_sum<0){
            curr_sum=0;
        }
    }
    cout<<max_sum;

    return 0;
    
}