word=input().upper()
word_list=list(set(word))

check=[]
for i in word_list:
    check.append(word.count(i))

if check.count(max(check))>1:
    print("?")
else:
    index=check.index(max(check))
    print(word_list[index])