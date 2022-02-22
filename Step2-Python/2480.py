#way1
num1,num2,num3=map(int,input().split())
result=0

if num1==num2==num3:
    result=10000+num1*1000
elif num1==num2:
    result=1000+num1*100
elif num2==num3:
    result=1000+num2*100
elif num3==num1:
    result=1000+num3*100
else:
    result=max(num1,num2,num3)*100

print(result)

#way2
num=list(map(int,input().split()))

if num[0]==num[1]==num[2]:
    print(10000+num[0]*1000)
elif num[0]==num[1]:
    print(1000+num[0]*100)
elif num[1]==num[2]:
    print(1000+num[1]*100)
elif num[2]==num[0]:
    print(1000+num[2]*100)
else:
    max=0
    for i in num:
        if i>max:
            max=i 
    print(max*100)