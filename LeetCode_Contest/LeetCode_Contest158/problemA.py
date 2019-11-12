class Solution:
    def balancedStringSplit(self, s: str) -> int:
        cnt , ans = 0, 0
        for c in s:
            if c == 'R':
                cnt = cnt + 1
            else :
                cnt = cnt - 1
            if cnt == 0:
                ans = ans + 1
        return ans

e = Solution()
str = input('')
print('%d' % e.balancedStringSplit(str))