class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> st;

        // First pass: push index of '(' or mark unmatched ')'
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '(') {
                st.push(i); // track index of '('
            } else if (s[i] == ')') {
                if (!st.empty()) {
                    st.pop(); // found a match
                } else {
                    s[i] = '*'; // mark unmatched ')'
                }
            }
        }

        // Any unmatched '(' in the stack, mark them as well
        while (!st.empty()) {
            s[st.top()] = '*';
            st.pop();
        }

        // Build result string, skipping all marked '*'
        string result;
        for (char c : s) {
            if (c != '*') result += c;
        }

        return result;
    }
};
