# Given a binary tree, return the preorder traversal of its nodes’ values.

# Example :

# Given binary tree

#    1
#     \
#      2
#     /
#    3
# return [1,2,3].

# Using recursion is not allowed.



# Definition for a  binary tree node
# class TreeNode:
#	def __init__(self, x):
#		self.val = x
#		self.left = None
#		self.right = None

class Solution:
	# @param A : root node of tree
	# @return a list of integers
	def preorderTraversal(self, A):
        ans = []
        current = A
        stack = []
        stack.append(current)
        while len(stack) > 0:
            top = stack.pop()
            ans.append(top.val)
            if top.right:
                stack.append(top.right)
            if top.left:
                stack.append(top.left)
            
        return ans
