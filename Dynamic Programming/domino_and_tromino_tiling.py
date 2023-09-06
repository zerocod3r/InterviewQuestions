# You have two types of tiles: a 2 x 1 domino shape and a tromino shape. You may rotate these shapes.


# Given an integer n, return the number of ways to tile an 2 x n board. Since the answer may be very large, return it modulo 109 + 7.

# In a tiling, every square must be covered by a tile. Two tilings are different if and only if there are two 4-directionally adjacent cells on the board such that exactly one of the tilings has both squares occupied by a tile.

 

# Example 1:


# Input: n = 3
# Output: 5
# Explanation: The five different ways are show above.
# Example 2:

# Input: n = 1
# Output: 1


class Solution:
    def numTilings(self, n: int) -> int:
        mod = 1000000007
        dp = [[0,0,0,0] for i in range(n+1)]
        
        def makeState(t1, t2):
            if not t1 and not t2:
                return 0
            elif not t1 and t2:
                return 1
            elif t1 and not t2:
                return 2
            else:
                return 3
        
        def solve(i, t1, t2):
            
            if i == n:
                return 1
            state = makeState(t1, t2)
            if dp[i][state] != 0:
                return dp[i][state]
            count = 0
            t3 = t4 = True if i+1<n else False
            
            if t1 and t2 and t3:
                count += solve(i+1, False, True)
            if t1 and t2 and t4:
                count += solve(i+1, True, False)
            if not t1 and t2 and t3 and t4:
                count += solve(i+1, False, False)
            if t1 and not t2 and t3 and t4:
                count += solve(i+1, False, False)
            if t1 and t2:
                count += solve(i+1, True, True)
            if t1 and t2 and t3 and t4:
                count += solve(i+1, False, False)
            if t1 and not t2 and t3:
                count += solve(i+1, False, True)
            if not t1 and t2 and t4:
                count += solve(i+1, True, False)
            if not t1 and not t2:
                count += solve(i+1, True, True)
            dp[i][state] = count%mod
            return dp[i][state]
        
        return solve(0, True, True)