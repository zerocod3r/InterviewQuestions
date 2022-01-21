#Evaluate the value of an arithmetic expression in Reverse Polish Notation.
#Valid operators are +, -, *, /. Each operand may be an integer or another expression.
# Input 1:
#     A =   ["2", "1", "+", "3", "*"]
# Output 1:
#     9
# Explaination 1:
#     starting from backside:
#     *: ( )*( )
#     3: ()*(3)
#     +: ( () + () )*(3)
#     1: ( () + (1) )*(3)
#     2: ( (2) + (1) )*(3)
#     ((2)+(1))*(3) = 9
    
# Input 2:
#     A = ["4", "13", "5", "/", "+"]
# Output 2:
#     6
# Explaination 2:
#     +: ()+()
#     /: ()+(() / ())
#     5: ()+(() / (5))
#     1: ()+((13) / (5))
#     4: (4)+((13) / (5))
#     (4)+((13) / (5)) = 6

class Solution:
	# @param A : list of strings
	# @return an integer
	def evalRPN(self, A):
        stack = []
        for element in A:
            if element in ['+','-','*','/']:
                first = stack.pop()
                second = stack.pop()
                if element == '+':
                    stack.append(first+second)
                elif element == '-':
                    stack.append(second-first)
                elif element == '*':
                    stack.append(first*second)
                else:
                    stack.append(int(second/first))
            else:
                stack.append(int(element))
        return int(stack.pop())
