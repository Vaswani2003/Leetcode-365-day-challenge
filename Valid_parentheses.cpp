/*
20. Valid Parentheses

Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
*/

// Time complexity : O(n) , runtime 0ms

class Solution {
public:
    bool isValid(string s) {
        vector<char> stack;
        int i;

        for(i = 0; i< s.length(); i++){
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
                stack.push_back(s[i]);
            else if (s[i] == ')' || s[i] == ']' || s[i] == '}'){
                if (stack.empty())  return false;
                else{
                    if((s[i] == ']' && stack.back() != '[') || (s[i] == ')' && stack.back() != '(') || (s[i] == '}' && stack.back() != '{'))
                        return false;
                    else
                        stack.pop_back();
                }
            }
        }
        return stack.empty();
    }
};
