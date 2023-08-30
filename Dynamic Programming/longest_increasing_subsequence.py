# Find the longest increasing subsequence of a given array of integers, A.

# In other words, find a subsequence of array in which the subsequence’s elements are in strictly increasing order, and in which the subsequence is as long as possible. 

# This subsequence is not necessarily contiguous, or unique.

# In this case, we only care about the length of the longest increasing subsequence.

# Example :

# Input 1:
#     A = [1, 2, 1, 5]

# Output 1:
#     3
    
# Explanation 1:
#     The sequence : [1, 2, 5]

# Input 2:
#     A = [0, 8, 4, 12, 2, 10, 6, 14, 1, 9, 5, 13, 3, 11, 7, 15]
    
# Output 2:
#     6

# Explanation 2:
#     The sequence : [0, 2, 6, 9, 13, 15] or [0, 4, 6, 9, 11, 15] or [0, 4, 6, 9, 13, 15]





class Solution:
	# @param A : tuple of integers
	# @return an integer
	def lis(self, A):
        m = len(A)
        B = sorted(list(set(A)))
        n = len(B)
        LIS = [[None]*(n+1) for i in range(m+1)]
        
        for i in range(m+1):
            for j in range(n+1):
                if i == 0 or j == 0:
                    LIS[i][j] = 0
                elif A[i-1] == B[j-1]:
                    LIS[i][j] = 1 + LIS[i-1][j-1]
                else:
                    LIS[i][j] = max(LIS[i-1][j], LIS[i][j-1])
        return LIS[-1][-1]
