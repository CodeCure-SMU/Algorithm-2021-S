import sys
tc = int(sys.stdin.readline())
sortList = list()
for i in range(tc):
    sortList.append(int(sys.stdin.readline()))
sortList.sort()
for i in sortList:
    print(i)