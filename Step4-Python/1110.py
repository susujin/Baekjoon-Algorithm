num=int(input())
count=0

while True:
    first=num//10 #몫=십의자리  
    last=num%10 #나머지=일의자리  

    result=first+last 
    count+=1

    new_result=num%10+result%10
 
    if num==new_result:
        break

print(count)

##아직 다 못품..