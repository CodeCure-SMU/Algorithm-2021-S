// Baekjoon_1463_Week3_yejin.cpp
#include <iostream>
#include <algorithm>
using namespace std;

int func(int num, int* data) {
	int t1 = 1'000'000'000;
	int t2 = 1'000'000'000;
	int t3 = 1'000'000'000;

	if (num == 1)
		return 0;

	if (data[num] == 0) {

		if (num % 3 == 0) 
			t1 = func(num / 3, data);

		if (num % 2 == 0)
			t2 = func(num / 2, data);

		t3 = func(num - 1, data);

		data[num] = min(min(t1, t2), t3) + 1;
	}

	return data[num];
}

int main(void){
	int data[1'000'001] = { 0, };
	int num;

	cin >> num;

	cout << func(num, data) << '\n';

	return 0;

}
