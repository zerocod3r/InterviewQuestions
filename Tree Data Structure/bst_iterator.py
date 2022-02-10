# Implement an iterator over a binary search tree (BST). Your iterator will be initialized with the root node of a BST.

# The first call to next() will return the smallest number in BST. Calling next() again will return the next smallest number in the BST, and so on.

# Note: next() and hasNext() should run in average O(1) time and uses O(h) memory, where h is the height of the tree.



# Definition for a  binary tree node
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class BSTIterator:

    stack = []

    # @param root, a binary search tree's root node
    def __init__(self, root):
        curr = root
        while curr:
            self.stack.append(curr)
            curr = curr.left
        

    # @return a boolean, whether we have a next smallest number
    def hasNext(self):
        return True if len(self.stack) > 0 else False
        

    # @return an integer, the next smallest number
    def next(self):
        curr = self.stack[-1].right
        smallest = self.stack.pop()
        while curr:
            self.stack.append(curr)
            curr = curr.left
        return smallest.val
        

# Your BSTIterator will be called like this:
# i = BSTIterator(root)
# while i.hasNext(): print i.next(),
