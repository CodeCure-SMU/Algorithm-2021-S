import sys
tc = int(sys.stdin.readline().rstrip())
for i in range(tc):
    a, b = map(int, sys.stdin.readline().rstrip().split())
    print(a+b)