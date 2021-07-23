// Baekjoon_01931_Week2_Taejin.cpp
#include <iostream>

#include <algorithm>

using namespace std;

typedef pair<int, int> pii;

bool compare(const pii& p1, const pii& p2) {
	if (p1.second != p2.second)
		return p1.second < p2.second;
	else
		return p1.first < p2.first;
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	pii meetings[100'000];
	for (int i = 0; i < n; i++)
		cin >> meetings[i].first >> meetings[i].second;

	sort(meetings, meetings + n, compare);

	int prevEnd = 0, ans = 0;
	for (int i = 0; i < n; i++)
		if (prevEnd <= meetings[i].first)
			ans++, prevEnd = meetings[i].second;

	cout << ans << '\n';

	return 0;
}