n = int(input())
shL = [1, 2]
for i in range(2, 1000):
    shL.append(shL[i-1] + shL[i-2])
print(shL[n-1]%10007)