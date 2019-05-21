'''

2
**
  *
  *
  **
    *
    *

3
***
   *
   *
   *
   ***
      *
      *
      *
      ***
         *
         *
         *
'''
n = int(input())
h_space = n
v_space = 0
for i in range(n):
    for spc in range(v_space):
        print(" ",end="")
    for j in range(n):
        print("*",end="")
    print("")
    v_space+=n
    for j in range(n):
        print(" "*h_space,end="")
        print("*")
    h_space+=n

