# Given a binary tree, return the inorder traversal of its nodes values.

# NOTE: Using recursion is not allowed.

# Example Input
# Input 1:

#    1
#     \
#      2
#     /
#    3
# Input 2:

#    1
#   / \
#  6   2
#     /
#    3


# Example Output
# Output 1:

#  [1, 3, 2]
# Output 2:

#  [6, 1, 3, 2]


# Example Explanation
# Explanation 1:

#  The Inorder Traversal of the given tree is [1, 3, 2].
# Explanation 2:

#  The Inorder Traversal of the given tree is [6, 1, 3, 2].


# Definition for a  binary tree node
# class TreeNode:
#	def __init__(self, x):
#		self.val = x
#		self.left = None
#		self.right = None


class Solution:
	# @param A : root node of tree
	# @return a list of integers
	def inorderTraversal(self, A):
		ans = []
		current = A
		stack = []
		while len(stack) > 0 or current:
			if current:
				stack.append(current)
				current = current.left
			else:
				top = stack.pop()
				ans.append(top.val)
				current = top.right
		return ans

