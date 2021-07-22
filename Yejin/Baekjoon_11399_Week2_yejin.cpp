// Baekjoon_11399_Week2_yejin.cpp
#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
	int N;
	int time[1001];
	int tot_time = 0;

	cin >> N;

	for (int i = 0; i < N; i++){
		cin >> time[i];
	}

	sort(time, time + N);

	for (int i = 0; i < N; i++){
		tot_time += time[i] * (N - i);
	}

	cout << tot_time << '\n';

	return 0;

}