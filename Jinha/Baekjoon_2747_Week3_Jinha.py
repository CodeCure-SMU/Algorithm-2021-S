import sys

def fib(num):
    if (fibo[num] == -1):
        fibo[num] = (fib(num-1) + fib(num-2))
    return fibo[num]

n = int(input())

fibo = [-1 for i in range(46)]
fibo[0] = 0
fibo[1] = 1
print(fib(n))