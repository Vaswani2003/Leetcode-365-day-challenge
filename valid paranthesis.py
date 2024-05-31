class Solution:
    def isValid(self, s: str) -> bool:
        n = len(s)

        if n%2:
            return False

        stack = []
        opening = '([{'
        closing = ')]}'

        for char in s:
            if char in opening:
                stack.append(char)
            elif char == ')':
                if stack and stack[-1] == '(':
                    stack.pop()
                else:   
                    return False
            elif char == ']':
                if stack and stack[-1] == '[':
                    stack.pop()
                else:
                    return False
            else:
                if stack and stack[-1] == '{':
                    stack.pop()
                else:
                    return False
        return True if not stack else False
                
