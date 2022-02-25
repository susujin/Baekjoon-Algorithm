#way1
n=int(input())

for i in range(n,0,-1):
    print(i)

#way2
n=int(input())
li=[]

for i in range(1,n+1):
    li.append(i)

li.reverse()

for i in li:
    print(i)