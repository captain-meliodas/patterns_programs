'''
4
********
***  ***
**    **
*      *
*      *
**    **
***  ***
********
'''
n = int(input())
space = 0
for i in range(n,0,-1):
    for j in range(i):
        print("*",end="")
    for spc in range(space):
        print(" ",end="")
    for j in range(i):
        print("*",end="")
    print("")
    space+=2
space-=2
print(space)
for i in range(1,n+1):
    for j in range(i):
        print("*",end="") 
    for spc in range(space):
        print(" ",end="")
    for j in range(i):
        print("*",end="")
    print("")
    space-=2

