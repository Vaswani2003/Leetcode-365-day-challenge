class Solution(object):
    def findDiagonalOrder(self, mat):
        """
        :type mat: List[List[int]]
        :rtype: List[int]
        """
        dic = dict()
        rows = len(mat)
        columns = len(mat[0])
        res = []

        for row in range(rows):
            for colm in range(columns):
                if row + colm not in dic:
                    dic[row+colm] = []
                dic[row+colm].append(mat[row][colm])
        
        for key, value in dic.items():
            if key%2==0:
                value.reverse()
            
            for x in value:
                res.append(x)
        

        return res

        
