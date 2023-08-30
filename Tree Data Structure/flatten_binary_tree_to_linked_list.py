# Given a binary tree, flatten it to a linked list in-place.

# Example :

# Given


#          1
#         / \
#        2   5
#       / \   \
#      3   4   6
# The flattened tree should look like:

#    1
#     \
#      2
#       \
#        3
#         \
#          4
#           \
#            5
#             \
#              6
# Note that the left child of all nodes should be NULL.




# Definition for a  binary tree node
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

def flattenUtil(root):
    if root == None:
        return
    stack = [root]
    while len(stack) > 0:
        current = stack.pop()
        if current.right:
            stack.append(current.right)
        if current.left:
            stack.append(current.left)
        if len(stack) > 0:
            current.right = stack[-1]
            current.left = None


class Solution:
    # @param A : root node of tree
    # @return the root node in the tree
    def flatten(self, A):
        flattenUtil(A)
        return A
