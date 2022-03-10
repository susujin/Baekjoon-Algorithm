subject_num=int(input())
arr=list(map(int,input().split()))

max_num=max(arr)
new_arr=[]

for i in arr:
    new_arr.append(i/max_num*100)
    print(new_arr)

# avg=sum(new_arr)/subject_num
# print(avg)