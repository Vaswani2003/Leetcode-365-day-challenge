class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        
        def sqrt_it(n: int):
            return 0 if n==0 else n*n

        return sorted(list(map(sqrt_it, nums)))
