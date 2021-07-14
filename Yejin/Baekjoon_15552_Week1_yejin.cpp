// Baekjoon_15552.cpp
#include <iostream>
using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int A, B;
	int caseNum;

	cin >> caseNum;

	for (int i = 0; i < caseNum; i++){
		cin >> A >> B;
		cout << A + B << '\n';
	}

	return 0;

}