# Given a binary tree A, invert the binary tree and return it. 

# Inverting refers to making left child as the right child and vice versa.

# Example Input
# Input 1:

 
#      1
#    /   \
#   2     3
# Input 2:

 
#      1
#    /   \
#   2     3
#  / \   / \
# 4   5 6   7


# Example Output
# Output 1:

 
#      1
#    /   \
#   3     2
# Output 2:

 
#      1
#    /   \
#   3     2
#  / \   / \
# 7   6 5   4


# Definition for a  binary tree node
# class TreeNode:
#	def __init__(self, x):
#		self.val = x
#		self.left = None
#		self.right = None

def invertTreeUtil(A):
	if A == None:
		return
	else:
		invertTreeUtil(A.left)
		invertTreeUtil(A.right)
		
		temp = A.left
		A.left = A.right
		A.right = temp


class Solution:
	# @param A : root node of tree
	# @return the root node in the tree
	def invertTree(self, A):
        invertTreeUtil(A)
        return A
