# Given an array of integers A and an integer B.

# Find the total number of subarrays having exactly B odd numbers.

# Input Format
# The first argument given is the integer array A.

# The second argument given is integer B.



# Output Format
# Return the total number of subarrays having exactly B odd numbers.



# Example Input
# Input 1:

#  A = [4, 3, 2, 3, 4]
#  B = 2
# Input 2:

#  A = [5, 6, 7, 8, 9]
#  B = 3


# Example Output
# Output 1:

#  4
# Output 2:

#  1


# Example Explanation
# Explanation 1:

#  The subarrays having exactly B odd numbers are:
#  [4, 3, 2, 3], [4, 3, 2, 3, 4], [3, 2, 3], [3, 2, 3, 4]
# Explanation 2:

#  The subarrays having exactly B odd numbers is [5, 6, 7, 8, 9]

class Solution:
    # @param A : list of integers
    # @param B : integer
    # @return an integer
    def solve(self, A, B):
        n = len(A)
        count = 0
        odd = 0
        prefix = [0] * (n+1)
        for i in A:
            prefix[odd] += 1
            if(i%2 != 0):
                odd += 1
            if odd >= B:
                count += prefix[odd - B]
        return count
