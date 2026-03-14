// // BruteForce Approach, O(n^2)
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] = {5,2,11,7,15};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int target = 9;
//     for (int i = 0; i < n; i++)
//     {   
//         int first = arr[i];
//         for (int j = i+1; j < n; j++)
//         {
//             int second = arr[j];
//             int sum = arr[i]+arr[j];
//             if(sum==target){
//                 cout<<"["<<arr[i]<<","<<arr[j]<<"]";
//             }
//         }
//     }
//     return 0;
// }


// // Better Approach
// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main() {
//     int arr[] = {5, 2, 11, 7, 15};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int target = 9;

//     // Sort the array (O(n log n))
//     sort(arr, arr + n);

//     // Print sorted array
//     cout << "Sorted array: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     // Two-pointer approach for pair sum
//     int left = 0, right = n - 1;
//     int foundIndexLeft = -1, foundIndexRight = -1; // markers

//     while (left < right) {
//         int sum = arr[left] + arr[right];
//         if (sum == target) {
//             foundIndexLeft = left;
//             foundIndexRight = right;
//             break; // stop at first pair
//         } else if (sum < target) {
//             left++;
//         } else {
//             right--;
//         }
//     }

//     if (foundIndexLeft != -1) {
//         cout << "Pair found: " << arr[foundIndexLeft] 
//              << " + " << arr[foundIndexRight] 
//              << " = " << target << endl;
//     } else {
//         cout << "No pair found with sum " << target << endl;
//     }

//     return 0;
// }

// OptimizedApproach
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;   // value -> index
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {
            int first = nums[i];
            int sec = target - first;

            // Check if complement exists
            if (m.find(sec) != m.end()) {
                ans.push_back(m[sec]); // index of complement
                ans.push_back(i);      // current index
                return ans;            // return immediately
            }

            // Store current value with its index
            m[first] = i;
        }

        return ans; // empty if no solution
    }
};

int main() {
    Solution s;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = s.twoSum(nums, target);

    if (!result.empty()) {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
        cout << "Values: " << nums[result[0]] << " + " << nums[result[1]]
             << " = " << target << endl;
    } else {
        cout << "No pair found." << endl;
    }

    return 0;
}