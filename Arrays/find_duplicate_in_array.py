class Solution:
    # @param A : tuple of integers
    # @return an integer
    def repeatedNumber(self, A):
        low = 1
        high = len(A)-1
        
        while low < high:
            mid = low+(high-low)/2
            count = 0
            for i in A:
                if i <= mid:
                    count+=1
            if count <= mid:
                low = mid+1
            else:
                high = mid
        return low
