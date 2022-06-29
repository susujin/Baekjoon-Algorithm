num=int(input())

room=1

while num>1:
    num-=room*6
    room+=1
print(room)