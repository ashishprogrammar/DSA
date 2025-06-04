#include <iostream>
#include <queue>
using namespace std;

class MyStack {
public:
    queue<int> q;

    MyStack() { 
    }

    void push(int x) {
        q.push(x);
        int size = q.size();
        while (size-- > 1) {
            q.push(q.front());
            q.pop();
        }
    }

    int pop() {
        int top = q.front();
        q.pop();
        return top;
    }

    int top() {
        return q.front();
    }

    bool empty() {
        return q.empty();
    }
};

// Test the stack implementation
int main() {
    MyStack stack;
    stack.push(1);
    stack.push(2);
    cout << "Top element: " << stack.top() << endl;  // Output: 2
    cout << "Pop: " << stack.pop() << endl;          // Output: 2
    cout << "Is empty? " << (stack.empty() ? "Yes" : "No") << endl; // Output: No
    cout << "Pop: " << stack.pop() << endl;          // Output: 1
    cout << "Is empty? " << (stack.empty() ? "Yes" : "No") << endl; // Output: Yes
    return 0;
}
