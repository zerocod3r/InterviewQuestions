# Implement atoi to convert a string to an integer.

class Solution:
    # @param A : string
	# @return an integer
	def atoi(self, A):
	    i = 0
        neg = 0
        if A[0] == '-' or A[0] == '+':
            if A[0] == '-':
                neg = 1
            i = i+1
        ans = 0
        while i<len(A):
            try:
                if int(A[i]) or int(A[i]) == 0:
                    ans = ans*10 + int(A[i])
                    if ans > 2147483647:
                        ans = -2147483648 if neg else 2147483647
                        return ans
                i = i+1
            except Exception as e:
                break
        ans = -ans if neg else ans
        return ans
