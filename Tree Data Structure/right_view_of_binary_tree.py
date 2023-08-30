# Given a binary tree A of integers. Return an array of integers representing the right view of the Binary tree.

# Right view of a Binary Tree: is a set of nodes visible when the tree is visited from Right side.

# Example Input
# Input 1:

#         1
#       /   \
#      2    3
#     / \  / \
#    4   5 6  7
#   /
#  8 
# Input 2:

#     1
#    /  \
#   2    3
#    \
#     4
#      \
#       5


# Example Output
# Output 1:

#  [1, 3, 7, 8]
# Output 2:

#  [1, 3, 4, 5]


# Definition for a  binary tree node
# class TreeNode:
#    def __init__(self, x):
#        self.val = x
#        self.left = None
#        self.right = None

class Solution:
    # @param A : root node of tree
    # @return a list of integers
    def solve(self, A):
        if A is None:
            return []
        ans = []
        queue = [A]
        while queue:
            n = len(queue)
            while n > 0:
                n = n - 1
                node = queue.pop(0)
                if n == 0:
                    ans.append(node.val)
                
                if node.left:
                    queue.append(node.left)
                
                if node.right:
                    queue.append(node.right)
                
        return ans
