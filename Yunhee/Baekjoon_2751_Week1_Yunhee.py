import sys

num = list()
a=int(input())
for i in range(a):
    b = int(sys.stdin.readline())
    num.append(b)
num.sort()
for i in num:
    print(i)
