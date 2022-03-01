a=int(input())
b=int(input())
c=int(input())

mul_result=a*b*c
slice_num=list(str(mul_result))

for i in range(10):
    count=slice_num.count('{}'.format(i))
    print(count)