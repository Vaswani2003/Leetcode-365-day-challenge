class Solution:
    def isHappy(self, n: int) -> bool:
        
        def square(x):
            ans = 0
            while x:
                ans += (x%10)**2
                x //= 10
            return ans
        
        slow = square(n)
        fast = square(square(n))

        while slow != fast:
            slow = square(slow)
            fast = square(square(fast))
            
        return slow == 1
