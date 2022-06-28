n=int(input())
num=n

for i in range(n):
    word=input()
    for j in range(0,len(word)-1):
        if word[j]==word[j+1]:
            pass
        elif word[j] in word[j+1:]:
            num-=1
            break
print(num)