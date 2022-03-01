arr=[0]*10

for i in range(10):
    arr[i]=int(input())%42

arr=set(arr)
print(len(arr))