#include<iostream>
#include<vector>
using namespace std;
// int TotalWater(vector<int>& height){
//     int n = height.size();
//     vector<int> lmax(n,0);
//     vector<int> rmax(n,0);
//     lmax[0] = height[0];
//     rmax[n-1] = height[n-1];

//     for (int i = 1; i < n; i++)
//     {
//         lmax[i] = max(lmax[i-1], height[i]);

//     }
//     for (int i = n-2; i >= 0; i--)
//     {
//         rmax[i] = max(rmax[i+1], height[i]);
//     }
//     int ans = 0;
//     for (int i = 0; i < n; i++)
//     {
//         ans+=min(lmax[i], rmax[i]) - height[i];
//     }
//     return ans;
// }


    int TotalWater(vector<int>& height) {
        int n = height.size();
        int lp = 0, rp = n-1;
        int ans = 0;
        int leftmax = 0, rightmax = 0;
        while(lp<rp){
            leftmax = max(leftmax, height[lp]);
            rightmax = max(rightmax, height[rp]);
            if(leftmax<rightmax){
                ans+=leftmax - height[lp];
                lp++;
            }else{
                ans+=rightmax - height[rp];
                rp--;
            }
        }
        return ans;
    }
int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);  // create vector of size n

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // cout << "You entered: ";
    // for (int x : arr) cout << x << " ";
    // cout << endl;

    cout<<TotalWater(arr);
    return 0;
}