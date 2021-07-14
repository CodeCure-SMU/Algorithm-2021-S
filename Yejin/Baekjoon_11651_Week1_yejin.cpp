// Baekjoon_11651.cpp
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct Coordinate {
	int x, y;
};

bool Compare(Coordinate a, Coordinate b){
	if (a.y == b.y) 
		return a.x < b.x;
	else 
		return a.y < b.y;
}

int main(void){
	int testCase;
	int Xtemp;
	int Ytemp;

	vector<Coordinate> coords;

	cin >> testCase;

	for (int i = 0;i < testCase; i++){
		cin >> Xtemp >> Ytemp;
		coords.push_back({Xtemp, Ytemp});
	}

	sort(coords.begin(), coords.end(), Compare);

	for (int i = 0; i < testCase; i++){
		cout << coords[i].x << " " << coords[i].y << '\n';
	}

	return 0;

}