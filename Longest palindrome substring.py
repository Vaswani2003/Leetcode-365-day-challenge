class Solution(object):
    def longestPalindrome(self, s):
        res = ""
        resLen = 0
        n = len(s)

        for i in range(0,n):

            # odd length
            l, r = i,i

            while l >= 0 and r < n and s[l] == s[r] :
                if r - l + 1 > resLen:
                    resLen = r-l+1
                    res = s[l:r+1]
                r += 1
                l -= 1

            # even length

            l, r = i, i+1

            while l >= 0 and r < n and s[l] == s[r] :
                if r - l + 1 > resLen:
                    resLen = r-l+1
                    res = s[l:r+1]

                r += 1
                l -= 1

        return res
