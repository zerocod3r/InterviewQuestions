# Given a binary tree, return the reverse level order traversal of its nodes values. (i.e, from left to right and from last level to starting level).

# Example Input
# Input 1:

#     3
#    / \
#   9  20
#     /  \
#    15   7
# Input 2:

#    1
#   / \
#  6   2
#     /
#    3


# Example Output
# Output 1:

#  [15, 7, 9, 20, 3] 
# Output 2:

#  [3, 6, 2, 1]


# Example Explanation
# Explanation 1:

#  Nodes as level 3 : [15, 7]
#  Nodes at level 2: [9, 20]
#  Nodes at level 1: [3]
#  Reverse level order traversal will be: [15, 7, 9, 20, 3]
# Explanation 2:

#  Nodes as level 3 : [3]
#  Nodes at level 2: [6, 2]
#  Nodes at level 1: [1]
#  Reverse level order traversal will be: [3, 6, 2, 1]



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
        stack = []
        current = A
        while queue:
            current = queue.pop(0)
            if current.right:
                queue.append(current.right)
            if current.left:
                queue.append(current.left)
            stack.append(current.val)
        return list(reversed(stack))
