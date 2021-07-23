// Baekjoon_20044_Week2_Taejin.cpp
#include <iostream>

#include <algorithm>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	int weight[100'000];
	for (int i = 0; i < 2 * n; i++)
		cin >> weight[i];

	sort(weight, weight + 2 * n);

	int ans = 1'234'567'890;
	for (int i = 0; i < n; i++)
		ans = min(ans, weight[i] + weight[2 * n - 1 - i]);

	cout << ans << '\n';

	return 0;
}