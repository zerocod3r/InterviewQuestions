# Enter your code here. Read input from STDIN. Print output to STDOUT

t = int(input())
while t!=0:
    text = input()
    odd = ""
    even = ""
    for i in range(0,len(text)):
        if i%2 == 0:
            even = even + text[i]
        else:
            odd = odd + text[i]
    print(even + " " + odd)
    t = t - 1