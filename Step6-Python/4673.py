def self_num(n):
    slice_num=list(str(n)) #숫자를 쪼개서 리스트로 만듬
    slice_sum=0

    for i in slice_num: #리스트의 숫자들 더하기
        slice_sum+=int(i)
    return n+slice_sum #원래 숫자와 리스트숫자들의 합을 더함.


no_self_num=[]
for j in range(1,10001):
    no_self_num.append(self_num(j)) #no_self_num에 self_num을 추가한다.

#for문으로 no_self_num안에 k가 있으면 패스 없다면 출력
#no_self_num안에는 self_num숫자들이 들어있음.
for k in range(1,10001):
    if k in no_self_num:
        pass
    else:
        print(k)