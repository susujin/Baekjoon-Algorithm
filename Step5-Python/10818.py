#way1
n=int(input())
arr=list(map(int,input().split()))
print(min(arr),max(arr))

#way2
n=int(input())
arr=list(map(int,input().split()))

max=-1000000
min=1000000

for i in arr:
    if i>max:
        max=i

    if i<min:
        min=i

print(min,max)