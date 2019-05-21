n = int(input())
space = n
count = 0 #for number of spaces in the last line of upper hut
#upper hut
for i in range(1,n+1):
    for spc in range(space):
        print(" ",end="")
    for j in range(i):
        print("*",end=" ")
        count = j #counting the number of spaces produced by end = " "
    space-=1
    print("")
#lower hut
space = n+j-4
for j in range(n):
    print("***",end="")
    for spc in range(space):
        print(" ",end="")
    print("***")
        