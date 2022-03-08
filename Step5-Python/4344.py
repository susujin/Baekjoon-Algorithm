n=int(input()) #테스트 케이스 개수

for i in range(n):
    num=list(map(int,input().split()))
    avg=sum(num[1:])/num[0] #평균

    count=0
    for j in num[1:]:
        if j>avg:
            count+=1
    
    rate=count/num[0]*100
    print("{:.3f}%".format(rate))
