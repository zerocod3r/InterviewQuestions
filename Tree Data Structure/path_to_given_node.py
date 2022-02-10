# Problem Description

# Given a Binary Tree A containing N nodes.

# You need to find the path from Root to a given node B.

# Example Input
# Input 1:

#  A =

#            1
#          /   \
#         2     3
#        / \   / \
#       4   5 6   7 


# B = 5

# Input 2:

#  A = 
#             1
#           /   \
#          2     3
#         / \ .   \
#        4   5 .   6


# B = 1




# Example Output
# Output 1:

#  [1, 2, 5]
# Output 2:

#  [1]


# Example Explanation
# Explanation 1:

#  We need to find the path from root node to node with data value 5.
#  So the path is 1 -> 2 -> 5 so we will return [1, 2, 5]
# Explanation 2:

#  We need to find the path from root node to node with data value 1.
#  As node with data value 1 is the root so there is only one node in the path.
#  So we will return [1]



# Definition for a  binary tree node
# class TreeNode:
#    def __init__(self, x):
#        self.val = x
#        self.left = None
#        self.right = None

def pathToGivenNodeUtil(A, B, path):
        if A == None:
            return
        path.append(A.val)
        if A.val == B:
            return
        pathToGivenNodeUtil(A.left, B, path)
        pathToGivenNodeUtil(A.right, B, path)
        if path[-1] != B:
            path.pop()


class Solution:
    # @param A : root node of tree
    # @param B : integer
    # @return a list of integers
    def solve(self, A, B):
        path = []
        pathToGivenNodeUtil(A, B, path)
        return path
