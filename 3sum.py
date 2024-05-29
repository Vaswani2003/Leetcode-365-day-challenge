class Solution(object):
    def threeSum(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        ans = []
        n = len(nums) 
        nums.sort()

        for i, a in enumerate(nums):
            if i > 0 and a == nums[i-1]:
                continue
            
            l, r = i+1, n-1

            while l < r:
                threeSum = nums[l] + nums[r] + a

                if threeSum == 0:
                    if [a,nums[l], nums[r]] not in ans:
                        ans.append([a,nums[l], nums[r]])
                    l += 1

                elif threeSum > 0:
                    r -= 1
                
                else:
                    l += 1
            
        return ans
