num=int(input()) #초기값
cmp_num=num #비교값
count=0

while True:
    ten=cmp_num//10 #몫=십의자리  
    one=cmp_num%10 #나머지=일의자리  

    #두 수를 더해 result값 만들기
    result=ten+one
    
    #새로운 비교값만들기
    cmp_num=one*10+result%10

    count+=1 #사이클 계산
    #원래 값과 새로운값 비교
    if num==cmp_num:
        break

print(count)