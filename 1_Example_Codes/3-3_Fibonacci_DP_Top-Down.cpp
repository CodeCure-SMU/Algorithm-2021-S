// 3-2_Fibonacci_DP_Top-Down.cpp
#include <iostream>

#define NOT_FIND -1

using namespace std;

int memo[46];

int fib(int n) {
	if (memo[n] == NOT_FIND)
		memo[n] = fib(n - 1) + fib(n - 2);

	return memo[n];
}

int main(void) {
	int n;
	cin >> n;

	fill(memo, memo + 46, NOT_FIND);
	memo[0] = 0;
	memo[1] = 1;

	cout << fib(n) << '\n';

	return 0;
}