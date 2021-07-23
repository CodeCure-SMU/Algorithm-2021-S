// Baekjoon11047.cpp
#include <iostream>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, k;
	cin >> n >> k;

	int coin[10];
	for (int i = 0; i < n; i++)
		cin >> coin[i];

	int ans = 0;
	for (int i = n - 1; i >= 0; i--) {
		if (k >= coin[i]) {
			int quotient = k / coin[i]; // 몫
			k -= quotient * coin[i];
			ans += quotient;
		}
	}

	cout << ans << '\n';

	return 0;
}