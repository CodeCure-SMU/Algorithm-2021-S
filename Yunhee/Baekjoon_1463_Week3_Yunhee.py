a=int(input())
d=[0]*(a+1)

for i in (2,a+1):
    d[i]=d[i-1]+1
    if i%3==0:
        if d[i]>d[i//3]:
            d[i]=d[i//3]+1
    if i%2==0:
        if d[i]>d[i//2]:
            d[i]=d[i//2]+1
print(d[a])
