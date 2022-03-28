t=int(input()) #테스트 케이스의 개수

#s는 문자열
#r은 반복횟수

for i in range(t):
    r,s=input().split()
    for j in s:
        print(j*int(r),end='')
    print()
