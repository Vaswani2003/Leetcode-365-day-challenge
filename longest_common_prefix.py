class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        shortest = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"
        res = ''

        for s in strs:
            if len(s) < len(shortest):
                shortest = s
        
        n = len(shortest)
        valid  = True
        i = 0

        while (i < n and valid):
            for s in strs:
                if s[i] != shortest[i]:
                    valid  = False
                    
            if valid:
                res += shortest[i]

            i += 1

        return res
