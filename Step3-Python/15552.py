import sys
num=int(input())

for i in range(num):
    a,b=map(int,sys.stdin.readline().split())
    #print(a+b)
    sys.stdout.write(str(a+b)+"\n")

## print()는 자동줄바꿈
## sys.stdout.write() 이건 자동 줄바꿈 안됨. 때문에 "\n" 써줘야 줄바꿈이 됨