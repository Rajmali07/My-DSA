// Method 1, by BruteForce approach, O(n^2)
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {
//         vector<int> ans;
//         int n = nums.size();
//         for (int i = 0; i < n; i++) {
//             int product = 1;
//             for (int j = 0; j < n; j++) {
//                 if (i != j) {
//                     product *= nums[j];
//                 }
//             }
//             ans.push_back(product);
//         }
//         return ans;
//     }
// };

// int main() {
//     Solution sol;
//     vector<int> nums = {1,2,3,4};
//     vector<int> result = sol.productExceptSelf(nums);

//     for (int x : result) {
//         cout << x << " ";  // Expected output: 24 12 8 6
//     }
//     cout << endl;
//     return 0;
// }

// //Similar as Method1
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> ans(n, 1);

//         for (int i = 0; i < n; i++) {
//             for (int j = 0; j < n; j++) {
//                 if (i != j) {
//                     ans[i] *= nums[j];
//                 }
//             }
//         }
//         return ans;
//     }
// };

// int main() {
//     Solution sol;
//     vector<int> nums = {1, 2, 3, 4};
//     vector<int> result = sol.productExceptSelf(nums);

//     for (int x : result) {
//         cout << x << " ";  // Expected output: 24 12 8 6
//     }
//     cout << endl;
//     return 0;
// }


// // Method 2, Optimized approach, O(n), space complexity O(n)
// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
//     public:
//     vector<int> productExceptSelf(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> ans(n, 1);
//         vector<int> prefix(n, 1);
//         vector<int> suffix(n, 1);
        
//         // Build prefix products
//         for (int i = 1; i < n; i++) {
//             prefix[i] = prefix[i - 1] * nums[i - 1];
//         }
        
//         // Build suffix products
//         for (int i = n - 2; i >= 0; i--) {
//             suffix[i] = suffix[i + 1] * nums[i + 1];
//         }
        
//         // Final answer: prefix[i] * suffix[i]
//         for (int i = 0; i < n; i++) {
//             ans[i] = prefix[i] * suffix[i];
//         }
        
//         return ans;
//     }
// };

// int main() {
//     Solution sol;
//     vector<int> nums = {1, 2, 3, 4};
//     vector<int> result = sol.productExceptSelf(nums);
    
//     for (int x : result) {
//         cout << x << " ";  // Expected output: 24 12 8 6
//     }
//     cout << endl;
//     return 0;
// }

// Method 3, Optimized approach, O(n), space complexity O(1)
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 1);

        // Build prefix products directly into ans
        for (int i = 1; i < n; i++) {
            ans[i] = ans[i - 1] * nums[i - 1];
        }

        // Multiply by suffix products
        int suffix = 1;
        for (int i = n - 2; i >= 0; i--) {
            suffix *= nums[i + 1];
            ans[i] *= suffix;
        }

        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 4};
    vector<int> result = sol.productExceptSelf(nums);

    for (int x : result) {
        cout << x << " ";  // Expected output: 24 12 8 6
    }
    cout << endl;
    return 0;
}