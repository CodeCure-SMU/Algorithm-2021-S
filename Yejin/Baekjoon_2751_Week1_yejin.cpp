// Baekjoon_2751_1_yejin.cpp
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
	int num;
	int temp[1000000];
	vector <int> v;

	cin >> num;

	for ( int i = 0; i < num; i++ ) {
		cin >> temp[i];
		v.push_back(temp[i]);
	}

	sort(v.begin(), v.end());

	for ( int i = 0; i < num; i++ ){
		cout << v[i] << '\n';
	}

	return 0;

}