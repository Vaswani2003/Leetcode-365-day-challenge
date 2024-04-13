class Solution(object):
    def nextGreaterElement(self, a, b):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: List[int]
        """
        n = len(b)
        res = []

        for each in a:
            index_of_each = b.index(each)
            print(index_of_each)
            found = -1

            while index_of_each < n:
                if b[index_of_each] > each:
                    found = b[index_of_each]
                    break
                index_of_each += 1

            res.append(found)
        return res
                
