# Given a binary tree containing digits from 0-9 only, each root-to-leaf path could represent a number.

# An example is the root-to-leaf path 1->2->3 which represents the number 123.

# Find the total sum of all root-to-leaf numbers % 1003.

# Example :

#     1
#    / \
#   2   3
# The root-to-leaf path 1->2 represents the number 12.

# The root-to-leaf path 1->3 represents the number 13.

# Return the sum = (12 + 13) % 1003 = 25 % 1003 = 25.




# Definition for a  binary tree node
# class TreeNode:
#	def __init__(self, x):
#		self.val = x
#		self.left = None
#		self.right = None

class Solution:
	# @param A : root node of tree
	# @return an integer
	def sumNumbers(self, A, pathsum=0):
        if A == None:
            return 0
        pathsum = ((10 * pathsum) + A.val)%1003
        if A.left == None and A.right == None:
            return pathsum%1003
        return (self.sumNumbers(A.left, pathsum) + self.sumNumbers(A.right, pathsum))%1003
