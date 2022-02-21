num1=int(input())
num2=int(input())

print(num1*(num2%10)) #일의자리
print(num1*(num2%100//10)) #십의자리
print(num1*(num2//100)) #백의자리
print(num1*num2)