n=int(input())

for i in range(n):
    ox=list(input())

    sum=0 #총합
    add_num=0 #더해지는 숫자

    for j in ox:
        if j=='O':
            add_num+=1
            sum+=add_num
        else:
            add_num=0
    print(sum)