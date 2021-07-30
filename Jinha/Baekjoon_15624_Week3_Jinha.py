'''
import sys
sys.setrecursionlimit(10**7)

def fib(num):
    #print(num)
    if (fibo[num] == -1):
        fibo[num] = (fib(num-1)%1000000007) + (fib(num-2)%1000000007)
        #if (fibo[num] >= 1000000007):
        #    fibo[num] %= 1000000007
    return fibo[num]
'''
n = int(input())

fibo = [0, 1]

for i in range(2, n+1):
    fibo.append((fibo[i-1] + fibo[i-2])%1000000007)

print(fibo[n])
