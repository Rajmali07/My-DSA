// By converting power into binary, O(log n)
#include <iostream>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0) return 1.0;
        if (x == 0) return 0.0;
        if (x == 1) return 1.0;
        if (x == -1 && n % 2 == 0) return 1.0;
        if (x == -1 && n % 2 != 0) return -1.0;

        long long binaryForm = n; // use long long to handle INT_MIN safely

        if (n < 0) {
            x = 1 / x;
            binaryForm = -binaryForm;
        }

        double ans = 1.0;
        while (binaryForm > 0) {
            if (binaryForm % 2 == 1) {
                ans *= x;
            }
            x *= x;
            binaryForm /= 2;
        }
        return ans;
    }
};

int main() {
    Solution sol;

    cout << sol.myPow(2.0, 10) << endl;   // 1024
    cout << sol.myPow(2.0, -2) << endl;   // 0.25
    cout << sol.myPow(3.0, 0) << endl;    // 1
    cout << sol.myPow(-1.0, 3) << endl;   // -1
    cout << sol.myPow(-1.0, 4) << endl;   // 1

    return 0;
}