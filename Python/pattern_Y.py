'''
5
    *
   * *
  * * *
 * * * *
* * * * *
* * * * *
 * * * *
  * * *
   * *
    *
'''

n = int(input())
space = n

for i in range(1,n+1):
    for spc in range(1,space):
        print(" ",end="")
    for j in range(i):
        print("* ",end="")
    print("")
    space-=1

for i in range(n,0,-1):
    for spc in range(0,space):
        print(" ",end="")
    for j in range(i):
        print("* ",end="")
    print("")
    space+=1

    
