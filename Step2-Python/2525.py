#way1
h,m=map(int,input().split())
time=int(input())

h+=time//60
m+=time%60

if m>=60:
    h+=1
    m-=60

if h>=24:
    h-=24

print(h,m)

#way2
h,m=map(int,input().split())
time=int(input())

m+=time
h+=m//60

print(h%24,m%60)

#너무 어렵다ㅠㅠ
#한참걸렸다...