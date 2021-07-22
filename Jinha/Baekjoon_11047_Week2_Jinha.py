import sys
sor, total = map(int, sys.stdin.readline().split())

coinL = []

for _ in range(sor):
    coinL.append(int(sys.stdin.readline()))

coinL.reverse()
num = 0

for c in coinL:
    if total >= c:
        plus = total // c
        total = total % c
        num += plus

print(num)

'''
i = 0

while i < len(coinL):
    #print(total, '\t coin : ', coinL[i])
    if total >= coinL[i]:
        total -= coinL[i]
        num += 1
        #print(coinL[i])
    else :
        i += 1

'''


'''
10 4200
1
5
10
50
100
500
1000
5000
10000
50000
'''
    