# 3-3_Fibonacci_DP_Top-Down.py
NOT_FIND = -1

def fib(n):
	if (memo[n] == NOT_FIND):
		memo[n] = fib(n - 1) + fib(n - 2)

	return memo[n]

n = int(input())

memo = [-1 for i in range(46)]
memo[0] = 0;
memo[1] = 1;

print(fib(n))