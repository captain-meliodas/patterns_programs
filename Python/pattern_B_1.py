'''
1
****

2
****
    ****

3
****
    ****
        ****
'''

n = int(input())
space = 0
for i in range(1,n+1):
    for spc in range(space):
        print(" ",end="")
    for i in range(4):
        print("*",end="")
    print("")
    space+=4
