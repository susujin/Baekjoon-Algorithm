num=int(input())

hansu_count=0
for i in range(1,num+1):
    slice_num=list(map(int,str(i)))

    if i<100:
        hansu_count+=1
    elif slice_num[0]-slice_num[1]==slice_num[1]-slice_num[2]:
        hansu_count+=1
print(hansu_count)