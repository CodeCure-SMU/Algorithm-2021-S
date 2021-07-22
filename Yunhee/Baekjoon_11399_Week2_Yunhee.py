a=int(input())
b=list(map(int,input().split()))
total=0
time_total=0
b.sort()

for i in range(a):
    total+=b[i]
    time_total+=total
    
print(time_total)
