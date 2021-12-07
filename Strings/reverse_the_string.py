# Given an input string, reverse the string word by word.

class Solution:
    # @param A : string
    # @return string
    def reverseWords(self, A):
        words = A.split()
        ans = ""
        for i in range(len(words)-1,-1,-1):
            if " " not in words[i]:
                ans = ans + words[i] if i == 0 else ans + words[i]+" "
        return ans
