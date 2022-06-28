num1,num2=input().split()

a=list(num1)
b=list(num2)
a.reverse()
b.reverse()
num1="".join(a)
num2="".join(b)

if num1>num2:
    print(num1)
elif num1<num2:
    print(num2)