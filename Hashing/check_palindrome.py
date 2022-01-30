# Problem Description

# Given a string A consisting of lowercase characters.

# Check if characters of the given string can be rearranged to form a palindrome.

# Return 1 if it is possible to rearrange the characters of the string A such that it becomes a palindrome else return 0.

# Example Input
# Input 1:

#  A = "abcde"
# Input 2:

#  A = "abbaee"


# Example Output
# Output 1:

#  0
# Output 2:

#  1

class Solution:
    def solve(self, A):
        hs = {}
        if len(A) == 1:
            return 1

        for i in A:
            if i not in hs.keys():
                hs[i] = 1
            else:
                hs[i] = hs[i] - 1
            if hs[i] == 0:
                del hs[i]
        ct = 0
        for key in hs.keys():
            if hs[key] == 1:
                ct = ct + 1
        return 0 if ct > 1 else 1
