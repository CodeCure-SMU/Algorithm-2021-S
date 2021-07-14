// baekjoon_numSotring_2750.cpp
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void){
	int num;
	vector<int> n;
	int temp;

	cin >> num;

	for (int i = 0; i < num; i++){
		cin >> temp;
 		n.push_back(temp);
	}

	sort(n.begin(), n.end());

	for (int i = 0; i < num; i++){
		cout << n[i] << '\n';
	}

	return 0;

}