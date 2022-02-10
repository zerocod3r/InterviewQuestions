# Problem Description

# You are given a preorder traversal A, of a Binary Search Tree.

# Find if it is a valid preorder traversal of a BST.

# Example Input
# Input 1:

# A = [7, 7, 10, 10, 9, 5, 2, 8]


# Example Output
# Output 1:

#  1




class Solution:
    # @param A : list of integers
    # @return an integer
    def solve(self, A):
        stack = []
        root = -2**32
        if len(A) == 1:
            return 1
        for i in range(0,len(A)):
            if A[i] < root:
                return 0
            while len(stack) > 0 and A[i] > stack[-1]:
                root = stack.pop()
            
            stack.append(A[i])
        return 1
