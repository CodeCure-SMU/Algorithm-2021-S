// Baekjoon_15624_Week3_yejin.cpp
#include <iostream>
using namespace std;

int Fibonacci(int x, int* data){
	if (x == 0)
		return data[x];

	else if (data[x] == 0)
		return data[x] = (Fibonacci(x - 1, data) + Fibonacci(x - 2, data)) % 1000000007;

	else 
		return data[x];
}

int main(void){
	int data[1000002] = {0, 1, 1, };
	int num;

	cin >> num;

	cout << Fibonacci(num, data) << '\n';

	return 0;

}

