# Given a binary tree A with N nodes.

# You have to remove all the half nodes and return the final binary tree.

# NOTE:

# Half nodes are nodes which have only one child.
# Leaves should not be touched as they have both children as NULL.

# Example Input
# Input 1:

#            1
#          /   \
#         2     3
#        / 
#       4

# Input 2:

#             1
#           /   \
#          2     3
#         / \     \
#        4   5     6


# Example Output
# Output 1:

#            1
#          /   \
#         4     3
# Output 2:

#             1
#           /   \
#          2     6
#         / \

#        4   5



# Example Explanation
# Explanation 1:

#  The only half node present in the tree is 2 so we will remove this node.
# Explanation 2:

#  The only half node present in the tree is 3 so we will remove this node.



# Definition for a  binary tree node
# class TreeNode:
#    def __init__(self, x):
#        self.val = x
#        self.left = None
#        self.right = None

class Solution:
    # @param A : root node of tree
    # @return the root node in the tree
    def solve(self, A):
        if A == None:
            return None
        
        A.left = self.solve(A.left)
        A.right = self.solve(A.right)
        
        if A.left == None and A.right == None:
            return A
        
        if A.left == None:
            new_root = A.right
            temp = A
            A = None
            del temp
            return new_root

        if A.right == None:
            new_root = A.left
            temp = A
            A = None
            del temp
            return new_root
        return A
