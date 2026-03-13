#include <iostream>
#include <vector>
#include <string>
using namespace std;

int compress(vector<char>& chars) {
    int n = chars.size();
    int idx = 0;
    for (int i = 0; i < n; i++) {
        char ch = chars[i];
        int count = 0;
        while (i < n && chars[i] == ch) {
            count++;
            i++;
        }
        if (count == 1) {
            chars[idx++] = ch;
        } else {
            chars[idx++] = ch;
            string str = to_string(count);
            for (char dig : str) {
                chars[idx++] = dig;
            }
        }
        i--; // adjust because for loop also increments i
    }
    chars.resize(idx);
    return idx;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input); // allows spaces too

    // Convert string to vector<char>
    vector<char> chars(input.begin(), input.end());

    int newLength = compress(chars);

    cout << "Compressed characters: ";
    for (char c : chars) cout << c;
    cout << endl;

    cout << "New length: " << newLength << endl;

    return 0;
}