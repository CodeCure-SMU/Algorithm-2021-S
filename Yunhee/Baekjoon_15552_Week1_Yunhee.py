import sys

x = int(input())

for a in range(x):
    a, b = map(int,sys.stdin.readline().split())
    print(a + b)
