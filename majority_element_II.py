class Solution(object):
    def majorityElement(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        d = dict()
        res = []
        n = len(nums)

        for each in nums:
            if each not in d:
                d[each] = 1
            else:
                d[each] += 1

        for key, val in zip(d.keys(), d.values()):
            if val > n/3:
                res.append(key)
                
        return res
