class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        
        #for validating rows
        for i in range(9):
            s = set()
            for j in range(9):
                ele = board[i][j]
                if ele in s:
                    return False
                elif ele != '.':
                    s.add(ele)
        
        #for validating cols
        for i in range(9):
            s = set()
            for j in range(9):
                ele = board[j][i]
                if ele in s:
                    return False
                elif ele != '.':
                    s.add(ele)

        #for validating 3*3 boxes
        starts = [(0, 0), (0, 3), (0, 6), (3, 0), (3, 3), (3, 6), (6, 0), (6, 3), (6, 6)]
        for i, j in starts:
            s = set()
            for row in range(i, i+3):
                for col in range(j, j+3):
                    ele = board[row][col]
                    if ele in s:
                        return False
                    elif ele != '.':
                        s.add(ele)

        return True


