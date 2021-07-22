// Baekjoon_11047_Week2_yejin.cpp
#include <iostream>
using namespace std;
int main(void){
	int n, k;
	int nums[10];
	int cnt = 0;

	cin >> n >> k;

	for (int i = 0; i < n; i++){
		cin >> nums[i];
	}

	for (int i = n - 1; i >= 0; i--){
		if(nums[i] <= k){
			cnt += k / nums[i];
			k -= nums[i] * (k / nums[i]);
			if (k == 0)
				break;
		}
	}

	cout << cnt << '\n';

	return 0;

}