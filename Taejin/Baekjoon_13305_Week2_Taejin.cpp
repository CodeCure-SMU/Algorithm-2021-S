// Baekjoon_13305_Week2_Taejin.cpp
#include <iostream>

using namespace std;

typedef long long ll;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	int distanceTo[100'000];
	for (int i = 1; i < n; i++)
		cin >> distanceTo[i];

	int price[100'000];
	for (int i = 0; i < n; i++)
		cin >> price[i];

	ll prevPrice = price[0], ans = 0;
	for (int i = 1; i < n; i++) {
		ans += prevPrice * distanceTo[i];
		if (prevPrice > price[i])
			prevPrice = price[i];
	}

	cout << ans << '\n';

	return 0;
}