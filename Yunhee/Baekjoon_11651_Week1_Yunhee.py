import sys

num = list()
a=int(input())
for i in range(a):
    num.append(list(map(int, sys.stdin.readline().split())))
num.sort(key = lambda x:(x[1],x[0]))
for i in num:
    for j in i:
         print(j, end=' ')    
    print()
