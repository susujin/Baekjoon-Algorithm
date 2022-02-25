count,min=map(int,input().split())
li=list(map(int,input().split()))

for i in range(count):
    if min>li[i]:
        print(li[i],end=' ')