count=int(input())

for i in range(1,count+1):
    for j in range(count,0,-1):
        if(i>=j):
            print("*",end='')
        else:
            print(" ",end='')
    print()