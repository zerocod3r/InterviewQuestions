# Given two strings A and B. Find the longest common sequence ( A sequence which does not need to be contiguous), which is common in both the strings.

# You need to return the length of such longest common subsequence.

# Example Input
# Input 1:

#  A = "abbcdgf"
#  B = "bbadcgf"


# Example Output
# Output 1:

#  5


# Example Explanation
# Explanation 1:

#  The longest common subsequence is "bbcgf", which has a length of 5



class Solution:
    # @param A : string
    # @param B : string
    # @return an integer
    def solve(self, A, B):
        m = len(A)
        n = len(B)
        lcs = [[None]*(n+1) for i in range(m+1)]
        
        for i in range(n+1):
            for j in range(m+1):
                if i == 0 or j == 0:
                    lcs[i][j] = 0
                elif A[i-1] == B[j-1]:
                    lcs[i][j] = 1 + lcs[i-1][j-1]
                else:
                    lcs[i][j] = max(lcs[i-1][j], lcs[i][j-1])
        return lcs[m][n]
