a_list=['c=','c-','dz=','d-','lj','nj','s=','z=']

a=input()

for i in a_list:
    a=a.replace(i,"?")
print(len(a))