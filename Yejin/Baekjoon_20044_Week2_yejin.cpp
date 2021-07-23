// Baekjoon_20044_Week2_yejin.cpp
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void){
	int team, temp;
	vector<int> p;
	int res = 100000000;

	cin >> team;

	for (int i = 0; i < team * 2; i++){
		cin >> temp;
		p.push_back(temp);
	}

	sort(p.begin(), p.end());

	for (int i = 0; i < team; i++){
		res = min(res, (p[i] + p[(2 * team - 1) - i] ));
	}

	cout << res << '\n';

	return 0;

}