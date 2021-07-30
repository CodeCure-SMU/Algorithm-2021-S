// Baekjoon_2579_Week3_yejin.cpp
#include <iostream>
using namespace std;

int stair(int x, int y, int dp[][301], int score[]){
	if (y < 0)
		return 0;

	if (x == 0 && y == 0)
		return score[y];

	if (x == 1 && y == 1)
		return score[1];

	if (dp[x][y] == 0){
		if (x == 0)
			return dp[x][y] = stair(1, y - 1, dp, score) + score[y];
		else if (x == 1)
			return dp[x][y] = max(stair(0, y - 2, dp, score), stair(1, y - 2, dp, score)) + score[y];
	}
	else
		return dp[x][y];
	
}

int main(void){
	int dp[2][301] = {0, };
	int score[300];

	int num;

	cin >> num;

	for(int i = 0; i < num; i++){
		cin >> score[i];
	}

	cout << max(stair(0, num - 1, dp, score), stair(1, num - 1, dp, score)) <<'\n';

	return 0;

}