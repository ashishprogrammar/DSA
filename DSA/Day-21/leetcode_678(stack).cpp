#include <iostream>
#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    bool checkValidString(string s) {
        stack<int> st;    // stores indices of '('
        stack<int> star;  // stores indices of '*'

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                st.push(i);
            } else if (s[i] == '*') {
                star.push(i);
            } else { // s[i] == ')'
                if (!st.empty()) {
                    st.pop();
                } else if (!star.empty()) {
                    star.pop(); // treat * as '('
                } else {
                    return false; // no match for ')'
                }
            }
        }

        // Match remaining '(' with '*' used as ')'
        while (!st.empty() && !star.empty()) {
            if (st.top() > star.top()) {
                return false; // '*' before '(', can't act as ')'
            }
            st.pop();
            star.pop();
        }

        return st.empty(); // all '(' must be matched
    }
};

int main() {
    Solution solution;
    string input;
    cout << "Enter the string: ";
    cin >> input;

    bool result = solution.checkValidString(input);
    cout << (result ? "Valid" : "Invalid") << endl;

    return 0;
}
