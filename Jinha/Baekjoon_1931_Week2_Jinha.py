import sys

N = int(sys.stdin.readline())

meetL = []

for _ in range(N):
    meetL.append(list(map(int, sys.stdin.readline().split())))

meetL = sorted(meetL, key=lambda x: x[0])
meetL = sorted(meetL, key=lambda x: x[1])

num = 0
temp = 0
for lis in meetL:
    if temp <= lis[0]:
        num += 1
        temp = lis[1]
print(num)


'''
11
2 13
1 4
3 5
12 14
0 6
5 7
3 8
8 12
5 9
6 10
8 11
'''