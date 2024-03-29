# You are given the following :

# A positive number N
# Heights : A list of heights of N persons standing in a queue
# Infronts : A list of numbers corresponding to each person (P) that gives the number of persons who are taller than P and standing in front of P
# You need to return  list of actual order of persons’s height

# Consider that heights will be unique

# Example

# Input : 
# Heights: 5 3 2 6 1 4
# InFronts: 0 1 2 0 3 2
# Output : 
# actual order is: 5 3 2 1 6 4 
# So, you can see that for the person with height 5, there is no one taller than him who is in front of him, and hence Infronts has 0 for him.

# For person with height 3, there is 1 person ( Height : 5 ) in front of him who is taller than him.

# You can do similar inference for other people in the list.




class Solution:
	# @param A : list of integers
	# @param B : list of integers
	# @return a list of integers
	def order(self, A, B):
        N = len(A)
        data = {A[i]:B[i] for i in range(N)}
        
        positions = list(range(N))
        
        res = [None] * N
        
        for k in sorted(data.keys()):
            res[positions[data[k]]] = k
            del positions[data[k]]
        
        return res
