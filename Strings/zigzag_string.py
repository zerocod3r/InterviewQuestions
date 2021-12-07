# The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)
# P.......A........H.......N
# ..A..P....L....S....I...I....G
# ....Y.........I........R
# And then read line by line: PAHNAPLSIIGYIR

class Solution:
    # @param A : string
    # @param B : integer
    # @return a strings
    def convert(self, A, n):
        rows = ["" for i in range(n)]
        if n == 1 or len(A) == 1:
            return A
        else:
            for i in range(1,n+1):
                j = i-1
                flag = 1 if i!=n else 0
                while j < len(A):
                    rows[i-1] = rows[i-1] + A[j]
                    if flag:
                        j = j + (n-i)*2
                        if i != 1:
                            flag = 0
                    else:
                        j = j + (i-1)*2
                        if i != n:
                            flag = 1
        return ''.join(rows)
