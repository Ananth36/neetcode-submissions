from collections import defaultdict
from typing import List

class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        
        rows = defaultdict(set)
        cols = defaultdict(set)
        boxes = defaultdict(set)
        
        for i in range(9):
            for j in range(9):
                val = board[i][j]
                
                
                if val == ".":
                    continue
                
                
                box_idx = (i // 3, j // 3)
                
                if val in rows[i] or val in cols[j] or val in boxes[box_idx]:
                    return False
                
                rows[i].add(val)
                cols[j].add(val)
                boxes[box_idx].add(val)
                
        return True