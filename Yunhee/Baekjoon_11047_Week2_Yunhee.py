a,b=map(int,input().split())
num=list()
m=0
total=0
for i in range(a):
    c=int(input())
    num.append(c)
num.reverse()

for i in range(0,a):
    if b>=num[i]:
        m=b//num[i]
        b-=num[i]*m
        total+=m

print(total)
