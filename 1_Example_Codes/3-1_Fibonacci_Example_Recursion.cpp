// 3-1_Fibonacci_Example.cpp
#include <iostream>

using namespace std;

long long callFib[46];

int fib(int n) {
	callFib[n]++;

	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return fib(n - 1) + fib(n - 2);
}

int main(void) {
	int n;
	cin >> n;

	cout << fib(n) << '\n';

	for (int i = 0; i <= 45; i++)
		cout << i << " : " << callFib[i] << '\n';

	return 0;
}