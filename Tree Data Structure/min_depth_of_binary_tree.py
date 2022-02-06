# Given a binary tree, find its minimum depth.

# The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node.

# NOTE : The path has to end on a leaf node.

# Example :

#          1
#         /
#        2
# min depth = 2.


# Definition for a  binary tree node
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    # @param A : root node of tree
    # @return an integer
    def minDepth(self, A):
        if A == None:
	        return 0
	    if A.left == None and A.right == None:
	        return 1
	    else:
	        if A.left == None:
	            return self.minDepth(A.right)+1
	        if A.right == None:
	            return self.minDepth(A.left)+1
	            
	        return min(self.minDepth(A.left), self.minDepth(A.right))+1
