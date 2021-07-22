import sys

price=0
a=int(input())
dis=list(map(int, sys.stdin.readline().split()))
coin=list(map(int, sys.stdin.readline().split()))
total=0
price=coin[0]

for i in range(a-1):
    if price>coin[i]:
        price=coin[i]
        total+=dis[i]*price
    else:
        total+=dis[i]*price
print(total)
