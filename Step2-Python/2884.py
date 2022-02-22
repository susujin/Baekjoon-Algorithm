h,m=map(int,input().split())

#m이 45분이상일 경우
if m>=45: 
    print(h,m-45)

#h가 0보다 크고 m이 45분미만일 경우
elif h>0 and m<45: 
    print(h-1,m+15)
    
# h가 0이면서 m이 45미만인경우
else: 
    print(23,m+15)