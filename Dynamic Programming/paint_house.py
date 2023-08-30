# There are a row of N houses, each house can be painted with one of the three colors: red, blue or green.

# The cost of painting each house with a certain color is different. You have to paint all the houses such that no two adjacent houses have the same color.

# The cost of painting each house with a certain color is represented by a N x 3 cost matrix A.

# For example, A[0][0] is the cost of painting house 0 with color red; A[1][2] is the cost of painting house 1 with color green, and so on.

# Find the minimum total cost to paint all houses.

# Example Input
# Input 1:

#  A = [  [1, 2, 3]
#         [10, 11, 12]
#      ]


# Example Output
# Output 1:

#  12


# Example Explanation
# Explanation 1:

#  Paint house 1 with red and house 2 with green i.e A[0][0] + A[1][1] = 1 + 11 = 12


class Solution:
    # @param A : list of list of integers
    # @return an integer
    def solve(self, A):
        n = len(A)
        dp = [[0]*3 for i in range(n)]
        dp[0][0], dp[0][1], dp[0][2] = A[0][0], A[0][1], A[0][2]
        for i in range(1, n):
            dp[i][0] = A[i][0] + min(dp[i-1][1], dp[i-1][2])
            dp[i][1] = A[i][1] + min(dp[i-1][0], dp[i-1][2])
            dp[i][2] = A[i][2] + min(dp[i-1][0], dp[i-1][1])
        return min(dp[n-1][0], dp[n-1][1], dp[n-1][2])
