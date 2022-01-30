# Given an 1D integer array A of size N you have to find and return the B largest elements of the array A.

# NOTE:

# Return the largest B elements in any order you like.

# Example Input
# Input 1:

#  A = [11, 3, 4]
#  B = 2
# Input 2:

#  A = [11, 3, 4, 6]
#  B = 3


# Example Output
# Output 1:

#  [11, 4]
# Output 2:

#  [4, 6, 11]


# Example Explanation
# Explanation 1:

#  The two largest elements of A are 11 and 4
# Explanation 2:

#  The three largest elements of A are 11, 4 and 6


class Solution:
    # @param A : list of integers
    # @param B : integer
    # @return a list of integers
    def solve(self, A, B):
        if len(A) == B:
            return A
        if len(A) == 2 and B == 1:
            return [A[0]] if A[0] > A[1] else [A[1]]
        minheap = []
        for i in range(B):
            minheap.append(A[i])
        for i in range(B,len(A)):
            minheap.sort()
            if minheap[0] > A[i]:
                continue
            else:
                minheap.pop(0)
                minheap.append(A[i])
        return minheap
