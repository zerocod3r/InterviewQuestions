# Given a BST node, return the node which has value just greater than the given node.

# Example:

# Given the tree

#                100
#               /   \
#             98    102
#            /  \
#          96    99
#           \
#            97
# Given 97, you should return the node corresponding to 98 as thats the value just greater than 97 in the tree.

# If there are no successor in the tree ( the value is the largest in the tree, return NULL).



# Definition for a  binary tree node
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    
    def wrapper(self, root, B):
        currentRoot = root
        successorNode = None
        while currentRoot != None:
            if B < currentRoot.val:
                successorNode = currentRoot
                currentRoot = currentRoot.left
            else:
                currentRoot = currentRoot.right
        return successorNode

    # @param A : root node of tree
    # @param B : integer
    # @return the root node in the tree
    def getSuccessor(self, A, B):
        return self.wrapper(A, B)