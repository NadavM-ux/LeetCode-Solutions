#include <stack>

class Solution {
public:
    bool isValid(string s) {
        std::stack<char> myStack;

        for (char c : s) {
            if (c == '{' || c == '[' || c == '(') {
                myStack.push(c);
            } else {
                if (myStack.empty()) return false;

                char top = myStack.top();
                if ((c == ')' && top == '(') ||
                    (c == ']' && top == '[') ||
                    (c == '}' && top == '{')) {
                        myStack.pop();
                } else {
                    return false;
                }
            }
        }
    return myStack.empty();
    }
};
