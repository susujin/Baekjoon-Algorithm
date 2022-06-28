eng_list=['ABC','DEF','GHI','JKL','MNO','PQRS','TUV','WXYZ']
a=input().upper()

time=0

for i in range(len(a)):
    for j in eng_list:
        if a[i] in j:
            time+=eng_list.index(j)+3

print(time)