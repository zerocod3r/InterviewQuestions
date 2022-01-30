# Problem Description

# Given are Three arrays A, B and C.

# Return the sorted list of numbers that are present in atleast 2 out of the 3 arrays.



# Problem Constraints
# 1 <= |A|, |B|, |C| <= 100000

# 1 <= A[i], B[i], C[i] <= 100000

# A, B, C may or may not have pairwise distinct elements.



# Input Format
# First argument is the array A.

# First argument is the array B.

# First argument is the array C.



# Output Format
# Return a sorted array of numbers.



# Example Input
# Input 1:

# A = [1, 1, 2]
# B = [2, 3]
# C = [3]
# Input 2:

# A = [1, 2]
# B = [1, 3]
# C = [2, 3]


# Example Output
# Output 1:

# [2, 3]
# Output 2:

# [1, 2, 3]

class Solution:
    # @param A : list of integers
    # @param B : list of integers
    # @param C : list of integers
    # @return a list of integers
    def solve(self, A, B, C):
        hs = { i:1 for i in A}
        B = set(B)
        C = set(C)
        for i in B:
            if i in hs.keys():
                hs[i] = hs[i] + 1
            else:
                hs[i] = 1
        for i in C:
            if i in hs.keys():
                hs[i] = hs[i] + 1
            else:
                hs[i] = 1
        return sorted([int(i) for i in hs.keys() if hs[i] >= 2])