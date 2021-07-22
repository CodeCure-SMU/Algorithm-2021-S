a=int(input())
b=list(map(int,input().split()))
num=list()
total=0
b.sort()

for i in range(a*2):
    if i<a:
        total=b[i]+b[(2*a-1)-i]
        num.append(total)
m=num[0]
for i in range(a):
    if m>num[i]:
        m=num[i]
print(m)
