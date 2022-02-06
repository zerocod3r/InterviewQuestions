# Given a binary tree and a sum, determine if the tree has a root-to-leaf path such that adding up all the values along the path equals the given sum.

# Example :

# Given the below binary tree and sum = 22,

#               5
#              / \
#             4   8
#            /   / \
#           11  13  4
#          /  \      \
#         7    2      1
# return true, as there exist a root-to-leaf path 5->4->11->2 which sum is 22.

# Return 0 / 1 ( 0 for false, 1 for true ) for this problem


# Definition for a  binary tree node
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    # @param A : root node of tree
    # @param B : integer
    # @return an integer
    def hasPathSum(self, A, B):
        ans = 0
        tempsum = B - A.val
        if tempsum == 0 and A.left == None and A.right == None:
            return 1
        else:
            if A.left != None:
                ans = ans or self.hasPathSum(A.left, tempsum)
            if A.right != None:
                ans = ans or self.hasPathSum(A.right, tempsum)
            return ans
