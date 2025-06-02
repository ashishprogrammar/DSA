#include <iostream>
#include <stack>
#include <string>
#include <algorithm>

class Solution {
public:
    int longestValidParentheses(std::string s) {
        std::stack<int> stack;
        stack.push(-1);
        int maxLength = 0;

        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == '(') {
                stack.push(i);
            } else {
                stack.pop();
                if (stack.empty()) {
                    stack.push(i);
                } else {
                    maxLength = std::max(maxLength, i - stack.top());
                }
            }
        }
        return maxLength;
    }
};

// Example usage
int main() {
    Solution sol;
    std::string input = ")()())";
    std::cout << "Longest valid parentheses length: " << sol.longestValidParentheses(input) << std::endl;
    return 0;
}
