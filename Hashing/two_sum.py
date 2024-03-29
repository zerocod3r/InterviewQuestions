# Given an array of integers, find two numbers such that they add up to a specific target number.

# The function twoSum should return indices of the two numbers such that they add up to the target, where index1 < index2. Please note that your returned answers (both index1 and index2 ) are not zero-based. Put both these numbers in order in an array and return the array from your function ( Looking at the function signature will make things clearer ). Note that, if no pair exists, return empty list.

# If multiple solutions exist, output the one where index2 is minimum. If there are multiple solutions with the minimum index2, choose the one with minimum index1 out of them.

# Input: [2, 7, 11, 15], target=9
# Output: index1 = 1, index2 = 2

class Solution:
	# @param A : tuple of integers
	# @param B : integer
	# @return a list of integers
	def twoSum(self, A, B):
        ans = []
        hs = {}
        for i in range(0,len(A)):
            k = B - A[i]
            if k in hs.keys():
                ans.append(hs[k]+1)
                ans.append(i+1)
                return ans
            if A[i] not in hs.keys():
                hs[A[i]] = i

        return ans
