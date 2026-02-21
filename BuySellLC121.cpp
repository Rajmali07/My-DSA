#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if (n == 0) return 0;

        int MP = 0;             // maximum profit
        int BB = prices[0];     // best buy price so far

        for (int i = 1; i < n; i++) {
            // check if selling today gives better profit
            MP = max(MP, prices[i] - BB);

            // update best buy price if today is cheaper
            BB = min(BB, prices[i]);
        }
        return MP;
    }
};

int main() {
    Solution sol;

    vector<int> prices1 = {7, 1, 5, 3, 6, 4};
    cout << sol.maxProfit(prices1) << endl; // Expected output: 5 (buy at 1, sell at 6)

    vector<int> prices2 = {7, 6, 4, 3, 1};
    cout << sol.maxProfit(prices2) << endl; // Expected output: 0 (no profit possible)

    vector<int> prices3 = {2, 4, 1};
    cout << sol.maxProfit(prices3) << endl; // Expected output: 2 (buy at 2, sell at 4)

    return 0;
}