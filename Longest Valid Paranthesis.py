class Solution:
    def longestValidParentheses(self, s: str) -> int:
        stack = [-1]
        maxu = 0

        for idx, bracket in enumerate(s):
            if bracket == '(':
                stack.append(idx)
            else:
                stack.pop()

                if stack:
                    maxu = max(maxu, idx - stack[-1])
                else:
                    stack.append(idx)
        return maxu
