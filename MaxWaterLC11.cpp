// Method1, O(n^2)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int MaxWater = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int width = j - i;
                int ht = min(height[i], height[j]);
                int currWater = width * ht;
                MaxWater = max(MaxWater, currWater); // ✅ fixed
            }
        }
        return MaxWater;
    }
};

int main() {
    Solution sol;
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    cout << sol.maxArea(height) << endl;  // Expected output: 49
    return 0;
}

// Method, O(n)
// #include <iostream>     // for input/output (cout, cin)
// #include <vector>       // for std::vector
// #include <algorithm>    // for std::min, std::max

// using namespace std;

// class Solution {
// public:
//     int maxArea(vector<int>& height) {
//         int lp = 0, rp = height.size() - 1;
//         int maxWater = 0;

//         while (lp < rp) {
//             int width = rp - lp;
//             int ht = min(height[lp], height[rp]);
//             int currWater = ht * width;
//             maxWater = max(maxWater, currWater);

//             // Move the pointer pointing to the smaller height
//             if (height[lp] < height[rp]) {
//                 lp++;
//             } else {
//                 rp--;
//             }
//         }
//         return maxWater;
//     }
// };

// int main() {
//     Solution sol;
//     vector<int> height = {1,8,6,2,5,4,8,3,7};
//     cout << sol.maxArea(height) << endl;  // Expected output: 49
//     return 0;
// }


