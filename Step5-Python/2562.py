#way1
arr=[0]*9

for i in range(9):
    arr[i]=int(input())
    
max_num=max(arr)
print(max_num)
print(arr.index(max_num)+1)

#way2
arr=[]

for i in range(9):
    arr.append(int(input()))
    
print(max(arr))
print(arr.index(max(arr))+1)