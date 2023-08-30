# Given a string A, find the common palindromic sequence ( A sequence which does not need to be contiguous and is a pallindrome), which is common in itself.

# You need to return the length of longest palindromic subsequence in A.

# Example Input
# Input 1:

#  A = "bebeeed"


# Example Output
# Output 1:

#  4


# Example Explanation
# Explanation 1:

#  The longest common pallindromic subsequence is "eeee", which has a length of 4




class Solution:
    # @param A : string
    # @return an integer
    def solve(self, A):
        n = len(A)
        lps = [[None]*(n) for i in range(n)]
        
        for i in range(n):
            lps[i][i] = 1
        
        for w in range(2, n+1):
            for i in range(n-w+1):
                j = i+w-1
                if A[i] == A[j] and w == 2:
                    lps[i][j] = 2
                elif A[i] == A[j]:
                    lps[i][j] = 2+lps[i+1][j-1]
                else:
                    lps[i][j] = max(lps[i+1][j], lps[i][j-1])
        
        return lps[0][n-1]
