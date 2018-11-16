#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	int b, g, cnt = 0;
	bool ib[100], ig[100];
	vector<int> boy, girl;
	cin >> b;
	for(int i = 0; i < b; i++) {
		int t;
		cin >> t;
		boy.push_back(t);
		ib[i] = false;
	}
	cin >> g;
	for(int i = 0; i < g; i++) {
		int t;
		cin >> t;
		girl.push_back(t);
		ig[i] = false;
	}
	sort(boy.begin(), boy.end());
	sort(girl.begin(), girl.end());
	for(int i = 0; i < b; i++) {
		for(int j = 0; j < g; j++) {
			if(!ib[i] && !ig[j]) {
				if(boy[i] - girl[j] == 0 || abs(boy[i] - girl[j]) == 1) {
					cnt++;
					ib[i] = true;
					ig[j] = true;
				}
			}
		}
	}

	cout << cnt;
	return 0;
}