class Solution:
    def queensAttacktheKing(self, queens: List[List[int]], king: List[int]) -> List[List[int]]:
        vis = [[0 for _ in range(8)] for _ in range(8)]
        for x, y in queens:
            vis[x][y] = 1
        ans = []
        step = {(-1, -1), (-1, 0), (-1, 1), (0, -1), (0, 1), (1, -1), (1, 1), (1, 0)}
        for dx, dy in step:
            x, y = king[0], king[1]
            while x >= 0 and x < 8 and y >= 0 and y < 8:
                if vis[x][y]:
                    ans.append([x, y])
                    break
                x += dx
                y += dy
        return ans
                

