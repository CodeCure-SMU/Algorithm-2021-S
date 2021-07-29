a,b=map(int,input().split())
num=list()
m=[10001]*(b+1)
m[0]=0

for i in range(a):
    c=int(input())
    num.append(c)

for i in range(a):
    for j in range(num[i],b+1):
        m[j]=min(m[j],m[j-num[i]]+1)

if m[b]==10001:
    print("-1")
else:
    print(m[b])
