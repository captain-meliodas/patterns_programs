'''
4
   *
  * *
 * * *
* * * *
   *
   *
   *
   *

3

  *
 * *
* * *
  *
  *
  *


'''

n = int(input())
space = n
temp = n
for i in range(1,n+1):
    for spc in range(space):
        print(" ",end="")
    space-=1
    for j in range(i):
        print("* ",end="")
    print("")

for k in range(n-1):
    for spc in range(temp):
        print(" ",end="")
    print("*")
