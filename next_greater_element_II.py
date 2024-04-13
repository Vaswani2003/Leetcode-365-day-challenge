class Solution(object):
    def nextGreaterElements(self, a):
        n, i, nxt, res = len(a), 0, 0, []

        while i < n:
            element = a[i]
            found = -1
            nxt = 0 if i+1 == n else i+1

            while nxt != i:
                if a[nxt] > element:
                    found = a[nxt]
                    break

                nxt = 0 if nxt+1 == n else nxt+1

            res.append(found)
            i += 1

        return res
