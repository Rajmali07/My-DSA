// // Method 1, by Bruteforce, O(n^2) 
// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int> vec = {6,5,5};
//     int n = vec.size();

//     for (int st = 0; st < n; st++) {
//         int freq = 0;
//         for (int element : vec) {
//             if (element == vec[st]) {
//                 freq++;
//             }
//         }
//         if (freq > n / 2) {
//             cout << vec[st] << endl; // print majority element
//             return 0;                // exit program
//         }
//     }

//     cout << "No majority element" << endl;
//     return 0;
// }


// // Method 2, Optimized , O(nlogn)
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int n = nums.size();
//         sort(nums.begin(), nums.end());

//         int freq = 1;          // start at 1 for the first element
//         int ans = nums[0];

//         for (int i = 1; i < n; i++) {
//             if (nums[i] == nums[i - 1]) {
//                 freq++;
//             } else {
//                 freq = 1;      // reset count
//                 ans = nums[i]; // update candidate
//             }
//             if (freq > n / 2) {
//                 return ans;
//             }
//         }
//         return ans; // majority element always exists per problem statement
//     }
// };

// int main() {
//     Solution sol;
//     vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
//     cout << sol.majorityElement(nums) << endl;
//     return 0;
// }   


// Method 3, By Moore's Voting Algorithm, O(n)
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int freq = 0, ans = 0;

        // Step 1: Find candidate
        for (int i = 0; i < n; i++) {
            if (freq == 0) {
                ans = nums[i];
                freq = 1;
            } else if (ans == nums[i]) {
                freq++;
            } else {
                freq--;
            }
        }

        // Step 2: Verify candidate (important for correctness)
        freq = 0;
        for (int val : nums) {
            if (val == ans) freq++;
        }

        if (freq > n / 2) {
            return ans;
        }
        return -1; // if no majority element exists
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    cout << sol.majorityElement(nums) << endl;
    return 0;
}