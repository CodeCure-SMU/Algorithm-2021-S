import sys
tc = int(sys.stdin.readline())
xy = []

for i in range(tc):
    xy.append(list(map(int, sys.stdin.readline().split())))
xy.sort(key=lambda x: (x[1], x[0]))
for x, y in xy:
    print(x, y)