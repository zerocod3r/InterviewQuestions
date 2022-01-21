# Problem Description

# Given an 1D integer array A containing N distinct integers.

# Find the number of unique pairs of integers in the array whose XOR is equal to B.

# NOTE:

# Pair (a, b) and (b, a) is considered to be same and should be counted once.
# Example Input
# Input 1:

#  A = [5, 4, 10, 15, 7, 6]
#  B = 5
# Input 2:

#  A = [3, 6, 8, 10, 15, 50]
#  B = 5


# Example Output
# Output 1:

#  1
# Output 2:

#  2

class Solution:
    # @param A : list of integers
    # @param B : integer
    # @return an integer
    def solve(self, A, B):
        count = 0
        hset = set()
        for num in A:
            if B ^ num in hset:
                count = count + 1
            hset.add(num)
        return count
