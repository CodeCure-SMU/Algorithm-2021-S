import sys

num = list()
total=0
t=0
a=int(input())
for i in range(a):
    num.append(list(map(int, sys.stdin.readline().split())))
num.sort(key = lambda x:(x[1],x[0]))

for i in num:
    if i[0]>=t:
        t=i[1]
        total+=1

print(total)
