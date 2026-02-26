#include <iostream>
#include <string>
#include <cctype>   // for tolower

using namespace std;

class Solution {
public:
    bool isAlphaNum(char ch) {
        //return isalnum(ch); to check alphanumeric directly
        if ((ch >= '0' && ch <= '9') ||
            (tolower(ch) >= 'a' && tolower(ch) <= 'z')) {
            return true;
        }
        return false;
    }

    bool isPalindrome(string s) {
        int st = 0, end = s.length() - 1;
        while (st < end) {
            if (!isAlphaNum(s[st])) {
                st++;
                continue;
            }
            if (!isAlphaNum(s[end])) {
                end--;
                continue;
            }
            if (tolower(s[st]) != tolower(s[end])) {
                return false;
            }
            st++;
            end--;
        }
        return true;
    }
};

int main() {
    Solution sol;

    // Test cases
    string test1 = "A man, a plan, a canal: Panama";
    string test2 = "race a car";
    string test3 = "No lemon, no melon";

    cout << "Test 1: " << (sol.isPalindrome(test1) ? "Palindrome" : "Not Palindrome") << endl;
    cout << "Test 2: " << (sol.isPalindrome(test2) ? "Palindrome" : "Not Palindrome") << endl;
    cout << "Test 3: " << (sol.isPalindrome(test3) ? "Palindrome" : "Not Palindrome") << endl;

    return 0;
}