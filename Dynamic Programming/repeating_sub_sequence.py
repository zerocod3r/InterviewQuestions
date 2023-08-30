# Given a string A, find length of the longest repeating sub-sequence such that the two subsequence don’t have same string character at same position,

# i.e., any i’th character in the two subsequences shouldn’t have the same index in the original string.

# NOTE: Sub-sequence length should be greater than or equal to 2.

# Example Input
# Input 1:

#  A = "abab"
# Input 2:

#  A = "abba"


# Example Output
# Output 1:

#  1
# Output 2:

#  0


# Example Explanation
# Explanation 1:

#  "ab" is repeated.
# Explanation 2:

#  There is no repeating subsequence.





class Solution:
	# @param A : string
	# @return an integer
	def anytwo(self, A):
        B = A
        n = len(A)
        lrs = [[0]*(n+1) for i in range(n+1)]
        
        for i in range(n+1):
            for j in range(n+1):
                if i == 0 or j == 0:
                    lrs[i][j] = 0
                elif A[i-1] == B[j-1] and i != j:
                    lrs[i][j] = 1 + lrs[i-1][j-1]
                else:
                    lrs[i][j] = max(lrs[i-1][j], lrs[i][j-1])
        return 1 if lrs[n][n] >= 2 else 0
