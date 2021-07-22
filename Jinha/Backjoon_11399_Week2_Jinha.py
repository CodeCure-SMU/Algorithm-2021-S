import sys

N = int(sys.stdin.readline())

pl = list(map(int, sys.stdin.readline().split()))
pl = sorted(pl)

sum = 0
total = 0
for i in pl:
    sum = i + sum
    total += sum
print(total)
