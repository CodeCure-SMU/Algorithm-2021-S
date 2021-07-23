// Baekjoon_11399_Week2_Taejin.cpp
#include <iostream>

#include <algorithm>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	int time[1'000];
	for (int i = 0; i < n; i++)
		cin >> time[i];

	sort(time, time + n);

	int ans = 0;
	for (int i = 0; i < n; i++)
		ans += time[i] * (n - i);

	cout << ans << '\n';

	return 0;
}